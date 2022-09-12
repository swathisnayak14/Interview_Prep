// Given an array of strings strs, group the anagrams together. You can return the answer in any order.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters
// exactly once.

// Example 1:

// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> printAnagramsTogether(vector<string> &wordArr)
{
    map<string, vector<string>> m;
    for (int i = 0; i < wordArr.size(); i++)
    {
        string s = wordArr[i];
        sort(wordArr.begin(), wordArr.end());
        m[s].push_back(wordArr[i]);
    }

    vector<vector<string>> ans(m.size());

    int idx = 0;
    for (auto x : m)
    {
        auto v = x.second;
        for (int i = 0; i < v.size(); i++)
        {
            ans[idx].push_back(v[i]);
        }
        idx++;
    }
    return ans;
}

int main()
{
    vector<string> wordArr = {"cat", "dog", "tac", "god", "act"};
    printAnagramsTogether(wordArr);
    return 0;
}