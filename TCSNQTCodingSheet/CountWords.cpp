// INPUT: str= "One two     three\n four\tfive "
// OUPUT: 5
// Given a string, count number of words in it. The words are separated by following characters: space (‘ ‘) or new line (‘\n’)
// or tab (‘\t’) or a combination of these.

// Recommended PracticeCount number of wordsTry It!
// There can be many solutions to this problem. Following is a simple and interesting solution.
// The idea is to maintain two states: IN and OUT. The state OUT indicates that a separator is seen. State IN indicates that a
//  word character is seen. We increment word count when previous state is OUT and next character is a word character.

#include <bits/stdc++.h>
using namespace std;
#define OUT 0
#define IN 1
void countWords(char *str)
{
    int state = OUT;
    int wordCount = 0;
    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            wordCount++;
        }
        ++str;
    }
    cout << wordCount;
}

int main()
{
    char str[] = "One two     three\n four\tfive ";
    countWords(str);
    return 0;
}