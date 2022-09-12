// You are given a 0-indexed string s of even length n. The string consists of exactly n / 2 opening brackets '[' and n / 2 closing brackets ']'.

// A string is called balanced if and only if:

// It is the empty string, or
// It can be written as AB, where both A and B are balanced strings, or
// It can be written as [C], where C is a balanced string.
// You may swap the brackets at any two indices any number of times.

// Return the minimum number of swaps to make s balanced.

// Example 1:

// Input: s = "][]["
// Output: 1
// Explanation: You can make the string balanced by swapping index 0 with index 3.
// The resulting string is "[[]]".

#include <bits/stdc++.h>
using namespace std;

int minSwaps(string str)
{
    int close = 0, maxClose = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '[')
            close -= 1;

        else
        {
            close += 1;
        }

        maxClose = max(close, maxClose);
    }
    return (maxClose + 1) / 2;
}

int main()
{
    string str = "[[][]]";
    cout << minSwaps(str);
    return 0;
}