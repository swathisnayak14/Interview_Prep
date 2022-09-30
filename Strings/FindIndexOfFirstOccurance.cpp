// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of
//  haystack.

// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.
// Example 2:

// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.

#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    int m = haystack.length();
    int n = needle.length();
    for (int i = 0; i < m - n + 1; i++)
    {
        if (haystack.substr(i, n) == needle)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string haystack = "sadbutsad";
    string needle = "sad";
    cout <<strStr(haystack,needle);
    return 0;
}