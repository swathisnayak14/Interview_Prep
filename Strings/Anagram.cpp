// Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, “act” and “tac” are an anagram of each other.

// Example 1:

// Input:
// a = geeksforgeeks, b = forgeeksgeeks
// Output: YES
// Explanation: Both the string have same
// characters with same frequency. So,
// both are anagrams.
// Example 2:

// Input:
// a = allergy, b = allergic
// Output: NO
// Explanation:Characters in both the strings
// are not same, so they are not anagrams.

#include <bits/stdc++.h>
using namespace std;

int anagram(string a, string b)
{
    map<char, int> mp;
    int n1 = a.size();
    int n2 = b.size();
    if (n1 != n2)
    {
        cout << "No";
        return 0;
    }
    for (auto i:a)
    {
        mp[i]++;
    }

    for (auto i:b)
    {
        mp[i]--;
    }

    for (auto it : mp)
    {
        if (it.second != 0)
            return 0;
    }
    return 1;
}
int main()
{
    string a = "geeksforgeeks", b = "forgeekegeeke";
    if(anagram(a, b))
    {
        cout<<"Yes";
    }
    else
        cout<<"No";
    return 0;
}