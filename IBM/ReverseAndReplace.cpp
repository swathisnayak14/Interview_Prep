// Given a string or a sentence need to be reversed and the vowels need to be replaced with

// number from 1 to 9. in the reversed string replaced number should appear in descendingorder from left to right. If there are more than 9 vowels
// numbering should restart from 1.
// Input:
// Language
//  Output:
//  4g32gn1L
#include <bits/stdc++.h>
using namespace std;

string reverseAndReplace(string str)
{
    string b = "";
    string rev="";
    int count = 1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            b += to_string(count);
            count++;
            if (count > 9)
            {
                count = 1;
            }
        }
        else
        {
            b += str[i];
        }
    }
    
    
    int size=b.length()-1;
    for(int i=size;i>=0;i--)
    {
        rev+=b[i];
    }
    return rev;
}
int main()
{
    string str = "Language";
    cout << reverseAndReplace(str);
}