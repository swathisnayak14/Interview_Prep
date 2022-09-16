// Given a string s, find the length of the longest substring without repeating characters.

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

#include <bits/stdc++.h>
using namespace std;

int longestSubstring(string str)
{
    set<char> s;
    int start = 0;
    int end = 0;
    int max = 0;

    while (start < str.size())
    {
        auto it = s.find(str[start]); // checking whether the str[start] say str[0] which is a is present in the set or not

        if (it == s.end()) // checking if the character is not in the set. If not there in the set then add to the set
        {
            if (start - end + 1 > max)
            {
                max = start - end + 1;
            }
            s.insert(str[start]);
            start++;
        }

        else // if its not unique
        {
            s.erase(str[end]);
            end++;
        }
    }
    return max;
}

int main()
{
    string str = "abcabcbb";
    cout << longestSubstring(str);
    return 0;
}