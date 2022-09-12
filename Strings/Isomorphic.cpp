// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may
// map to the same character, but a character may map to itself.

// Example 1:

// Input: s = "egg", t = "add"
// Output: true

#include <bits/stdc++.h>
using namespace std;

bool isomorphic(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();

    if (n1 != n2)
        return false;

    int m1[256] = {0};
    int m2[256] = {0};

    for (int i = 0; i < n1; i++)
    {
        if (!m1[s1[i]] and !m2[s2[i]])
        {
            m1[s1[i]] = s2[i];
            m2[s2[i]] = s1[i];
        }
        else if (m1[s1[i]] != s2[i])
            return false;
    }
    return true;
}

int main()
{
    string s1 = "egg";
    string s2 = "add";
    if (isomorphic(s1, s2))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}