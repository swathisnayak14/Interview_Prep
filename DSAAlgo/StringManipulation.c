// Given a string with n words separated by spaces:
// First word needs to have all vowels to be replaced by #
// Second word needs to have all consonants to be replaced by ?
// Third word needs to have all digits to be replaced by a
// (Repeat for further words)
// (Could be uppercase or lower case)
// Sample Input: I am really good at 5000 Programs
// Sample Output: # a? really g##d a? aaaa Pr#gr#ms

#include <stdio.h>

int vowel(char ch)
{
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':return 1;
    default:return 0;
    }
}

void stringify(char *str)
{
    int word_count = 1;
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            printf(" ");
            word_count++;
            continue;
        }

        if (word_count % 3 == 1) // replacing vowels with #
        {
            if (vowel(str[i]))
            {
                printf("#");
                continue;
            }
        }

        else if (word_count % 3 == 2) // replacing constants with ?
        {
            if (((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) && !vowel(str[i]))
            {
                printf("?");
                continue;
            }
        }

        else
        { // replacing digits with a
            if (str[i] >= 48 && str[i] <= 57)
            {
                printf("a");
                continue;
            }
        }
        printf("%c", str[i]);
    }
}

void main()
{
    char str[100] = "I am really good at 5000 Programs";
    stringify(str);
}