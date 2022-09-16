// A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing
// the relative order of the remaining characters.

// For example, "ace" is a subsequence of "abcde".

// Example 1:

// Input: s = "abcde", words = ["a","bb","acd","ace"]
// Output: 3
// Explanation: There are three strings in words that are a subsequence of s: "a", "acd", "ace".
// Example 2:

// Input: s = "dsahjpjauf", words = ["ahjpjau","ja","ahbwzgqnuk","tnmlanowax"]
// Output: 2

#include <bits/stdc++.h>
using namespace std;

int numberOfMatchingSubsequences(string str, vector<string> &words)
{
    map<char, vector<int>> m;
    int i = 0;
    for (auto x : str)
        m[x].push_back(i++);
    int count = 0;
    for (int i = 0; i < words.size(); i++)
    {
        string curr = words[i];
        int latest = -1;
        for (int j = 0; j < curr.size(); j++)
        {
            auto it = upper_bound(m[curr[j]].begin(), m[curr[j]].end(), latest); // keep a note of the prev element
            if (it == m[curr[j]].end())
                break;
            latest = *it;
            if (j == curr.size() - 1)
                count++;
        }
    }
    return count;
}

int main()
{
    string str = "dsahjpjauf";
    vector<string> words{"ahjpjau","ja","ahbwzgqnuk","tnmlanowax"};
    cout << numberOfMatchingSubsequences(str, words);
    return 0;
}
