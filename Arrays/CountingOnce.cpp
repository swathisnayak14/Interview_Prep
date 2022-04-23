// Program to find all the patterns of 0(1+)0 in the given string 
// Program to find all the patterns of 0(1+)0 in the given string is discussed here. Given a string containing 0's and 1's, find the total number of 0(1+)0 patterns in the string and output it.

// 0(1+)0 - There should be at least one '1' between the two 0's.

// For example, consider the following string.

// Input: 01101111010
// Output: 3

// Explanation:
// 01101111010 - count = 1
// 01101111010 - count = 2
// 01101111010- count = 3

// Algorithm to find all the patterns of 0(1+)0 in the given string
// Input the given string.
// Scan the string, character by character.
// If the given pattern is encountered, increment count.
// Print count.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    char first = str[0]; 
    int i = 1, counter = 0;
    while (i < str.size())
    {
        if (str[i] == '1' && first == '0')
        {
            while (str[i] == '1')
                i++;
            if (str[i] == '0')
                counter++;
        }
        first = str[i];
        i++;
    }
    cout << counter << endl;
    return 0;
}