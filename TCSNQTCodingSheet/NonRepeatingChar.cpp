// Find Non-repeating characters of a String
// Problem:  Given a string, print non-repeating characters of the string.

// Examples:

// Example 1:
// Input: string = “google”
// Output: l,e

// Explanation: Non repeating characters are l,e.

// Example 2:
// Input: string = “yahoo”
// Output: y,a,h
// Explanation: Non repeating characters are y,a,h

#include <bits/stdc++.h>
using namespace std;

void nonRepeatingChar(string str)
{
    int n = str.length();
    unordered_map<char, int> m;
    for (int i = 0; i < n; i++)
        m[str[i]]++;
    unordered_map<char, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second == 1)
            cout << it->first<<" ";
            // break; if its for the first non-repeating character
    }
}

int main()
{
    string str = "google";
    nonRepeatingChar(str);
    return 0;
}
