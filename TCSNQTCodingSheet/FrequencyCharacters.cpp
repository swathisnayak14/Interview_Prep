// Calculate Frequency of characters in a String
// Problem Statement: Given a string, calculate the frequency of characters in a string.

// Examples:

// Example 1:
// Input: takeuforward
// Output: a2 d1 e1 f1 k1 o1 r2 t1 u1 w1
// Explanation: Count of every character of string is printed.

// Example 2:
// Input: articles
// Output: a1 c1 e1 i1 l1 r1 s1 t1
// Explanation: Count of every character of string is printed.

#include <bits/stdc++.h>
using namespace std;
void Printfrequency(string str)
{
    int n = str.length();
    map<char, int> m;
    for (int i = 0; i < n; i++)
        m[str[i]]++;
    map<char, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
        cout << it->first << it->second << " ";
}

int main()
{
    string str = "takeuforward";
    Printfrequency(str);
    return 0;
}