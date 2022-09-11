// Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S).
// Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S. Incase of conflict, return the substring which occurs first ( with the least starting index).

// Example 1:

// Input:
// S = "aaaabbaa"
// Output: aabbaa
// Explanation: The longest Palindromic
// substring is "aabbaa".
// Example 2:

// Input:
// S = "abc"
// Output: a
// Explanation: "a", "b" and "c" are the
// longest palindromes with same length.
// The result is the one with the least
// starting index.

#include <bits/stdc++.h>
using namespace std;
void printString(string str, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout << str[i];
    }
}

void longestPalindrome(string str)
{
    int low, high;
    int start = 0, end = 1;
    for (int i = 0; i < str.length(); i++)
    {
        // even string
        low = i - 1;
        high = i;
        while (low >= 0 && high < str.length() && str[low] == str[high])
        {
            if (high - low + 1 > end)
            {
                start = low;
                end = high - low + 1;
            }
            low--;
            high++;
        }

        // odd string
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < str.length() && str[low] == str[high])
        {
            if (high - low + 1 > end)
            {
                start = low;
                end = high - low + 1;
            }
            low--;
            high++;
        }
    }
    printString(str, start, start + end - 1);
}

int main()
{
    string str = "aaaabbaa";
    longestPalindrome(str);
    return 0;
}