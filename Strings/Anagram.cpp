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

bool anagram(string s1, string s2)
{
    int c[26] = {0};
    int d[26] = {0};
    int len1 = s1.length();
    int len2 = s2.length();
    int flag = 0;
    if (len1 != len2)
        return false;
    for (int i = 0; i < len1; i++)
    {
        c[s1[i] - 'a']++;
        d[s2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (c[i] != d[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return false;
    else
        return true;
}
int main()
{
    string a, b;
    cin >> a >> b;
    cout << anagram(a, b);
    return 0;
}