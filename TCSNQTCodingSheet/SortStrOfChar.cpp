// Given a string of lowercase characters from ‘a’ – ‘z’. We need to write a program to print the characters of this string in sorted order.
// Examples:

// Input : bbccdefbbaa
// Output : aabbbbccdef

// Input : geeksforgeeks
// Output : eeeefggkkorss

#include <bits/stdc++.h>
using namespace std;

void sortString(string str)
{
    sort(str.begin(), str.end());
    cout << str;
}

int main()
{

    string s = "geeksforgeeks";
    sortString(s);
    return 0;
}