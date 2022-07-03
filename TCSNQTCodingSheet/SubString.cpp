// Given two strings s1 and s2, find if s1 is a substring of s2. If yes, return the index of the first occurrence, else return -1.

// Examples :

// Input: s1 = “for”, s2 = “geeksforgeeks”
// Output: 5
// Explanation: String “for” is present as a substring of s2.

// Input: s1 = “practice”, s2 = “geeksforgeeks”
// Output: -1.
// Explanation: There is no occurrence of “practice” in “geeksforgeeks”

#include <bits/stdc++.h>
using namespace std;

int subString(string s1, string s2)
{
    int lenSub = s2.length();
    int n = s1.length();
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1.substr(i, lenSub) == s2)
        {
            flag = 1;
            return i;
        }
    }
    return -1;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << subString(s1, s2);
    return 0;
}