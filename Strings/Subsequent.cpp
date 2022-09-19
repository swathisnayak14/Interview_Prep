// Input:s="abc"
//       t="ahbgdc"

// Output:true

// Explaination: Given two strings s and l,return true if s is subsequence of t or false otherwise.

// A subseq of a string is a new string that is formed from the original string by deleting some of the characters wihtout disturbing the original
// string by deleting some of the characters without disturbing the relative positions of the remaining characters(i.e:"ace" is a subseq of "abcde"
// while "aec" is not).

#include <bits/stdc++.h>
using namespace std;

bool subseq(string s, string t)
{
    int m = s.length();
    int n = t.length();
    int i = 0, j = 0; // two pointers to iterate over each string s and t
    while (i < m && j < n)
    {
        if (s[i] == t[j])
        {
            i++;
        }
        j++;
    }

    return i == m ? 1 : 0;//reached the end then its true
}

int main()
{
    string s = "abc";
    string t = "ahbgdc";

    if (subseq(s, t))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}