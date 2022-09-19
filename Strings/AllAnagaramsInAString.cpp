// Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters
// exactly once.

// Example 1:

// Input: s = "cbaebabacd", p = "abc"
// Output: [0,6]
// Explanation:
// The substring with start index = 0 is "cba", which is an anagram of "abc".
// The substring with start index = 6 is "bac", which is an anagram of "abc".
// Example 2:

// Input: s = "abab", p = "ab"
// Output: [0,1,2]
// Explanation:
// The substring with start index = 0 is "ab", which is an anagram of "ab".
// The substring with start index = 1 is "ba", which is an anagram of "ab".
// The substring with start index = 2 is "ab", which is an anagram of "ab".

#include <bits/stdc++.h>
using namespace std;

vector<int> allAnagramString(string s, string p)
{
    vector<int> phash(26, 0);
    vector<int> shash(26, 0);
    vector<int> result;
    for (int i = 0; i < p.size(); i++)
    {
        phash[p[i - 'a']]++;
        shash[p[i - 'a']]++;
    }

    if (phash == shash)
        result.push_back(0); // works for the 0th index

    for (int i = p.size(); i < s.size(); i++) // works for other indexes. The value of the phash will remain the same, only the shash will change as we are moving
                                              // the index value.
    {
        shash[p[i - 'a']]++;            // Adding the next element that we included using sliding window
        shash[s[i - p.size()] - 'a']--; // eg:abab in this first we choose aba and see if its an anagram will ab and then next we want to move to bab, so we have the
                                        // index at a=2 as we have initial index as p.size() which is 2 where p="ab" so for i++ we have i=3 we need to subtract the first a here. so
                                        // we have s[3-3]-'a=s[0] we will delete
        if (phash == shash)                     // here we check if both are equal
            result.push_back(i + 1 - p.size()); // if so then we push back 3+1-3=1 ie: index one as the starting index of the anagram
    }
    return result;
}

int main()
{
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> ans = allAnagramString(s, p);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}