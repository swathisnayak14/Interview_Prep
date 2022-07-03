// Problem Statement: Given a string, write a program to change every letter in the given string with the letter following it in
// the alphabet (ie. a becomes b, p becomes q, z becomes a)

// Examples:

// Example 1:
// Input: string str = “abcdxyz”
// Output: bcdeyza

#include <bits/stdc++.h>
using namespace std;

void nextAlpha(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        int ascii = (int)(str[i]);
        if (ascii == 90)
            str[i] = char(65);
        else if (ascii == 122)
            str[i] = char(97);
        else if ((ascii >= 65 && ascii < 90) || (ascii >= 97 && ascii < 122))
        {
            str[i] = (char)(ascii + 1);
        }
    }
    cout << str;
}
int main()
{
    // string str = "abcdxyz";
    string str="Java";
    nextAlpha(str);
}