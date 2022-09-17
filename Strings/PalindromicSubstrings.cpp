// Given a string s, return the number of palindromic substrings in it.

// A string is a palindrome when it reads the same backward as forward.

// A substring is a contiguous sequence of characters within the string.

// Example 1:

// Input: s = "abc"
// Output: 3
// Explanation: Three palindromic strings: "a", "b", "c".
// Example 2:

// Input: s = "aaa"
// Output: 6
// Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".

#include <bits/stdc++.h>
using namespace std;

int palindromicSubstring(string s)
{
    vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false)); // setting all values to false
    int count = 0;
    for (int diff = 0; diff < s.size(); diff++) // holds the values like 00=0,11=0,22=0,33=0,44=0,55=0
    {
        for (int i = 0, j = diff; j < s.size(); i++, j++)
        {
            if (diff == 0)
            {
                dp[i][j] = true;
            }

            else if (diff == 1)
            {
                if (s[i] == s[j]) // strings are equal
                {
                    dp[i][j] = true;
                }
                else
                    dp[i][j] = false;
            }

            else
            {
                if (s[i] == s[j])
                    dp[i][j] = dp[i + 1][j - 1];

                else
                    dp[i][j] = false;
            }

            if (dp[i][j])
                count++;
        }
    }

    return count;
}

int main()
{
    string s = "abc";
    cout << palindromicSubstring(s);
    return 0;
}