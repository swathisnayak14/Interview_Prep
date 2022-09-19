// The numeric value of a string consisting of lowercase characters is defined as the sum of its characters' numeric values.
// For example, the numeric value of the string "abe" is equal to 1 + 2 + 5 = 8.

// You are given two integers n and k. Return the lexicographically smallest string with length equal to n and numeric value equal to k.

// Note that a string x is lexicographically smaller than string y if x comes before y in dictionary order, that is, either x is a prefix
//  of y, or if i is the first position such that x[i] != y[i], then x[i] comes before y[i] in alphabetic order.

// Example 1:

// Input: n = 3, k = 27
// Output: "aay"
// Explanation: The numeric value of the string is 1 + 1 + 25 = 27, and it is the smallest string with such a value and length equal to 3.
// Example 2:

// Input: n = 5, k = 73
// Output: "aaszz"

#include <bits/stdc++.h>
using namespace std;

void smallestString(int n, int k)
{
    vector<int> v(n, 1); // put 3 ones as n is 3, so if n=5 then we will have 5 ones.
    k = k - n;           // we subtract n from k as initially we will have 1 1 1 and the remaining 24 needs to be put.
    int i = n - 1;
    while (k) // until k becomes 0
    {
        if (k > 25)
        {
            v[i] = 26; // checking if k>25, ie: if its 26 then we add the last element will 25.
            k = k - 25;
            i--; // moving to the last but one element
        }

        else // if its not greater than 25
        {
            v[i] = k + 1; // if k is 10 we will add it to the 1.
            k -= k;
        }
    }

    // converting the numbers to ASCII value;
    string output;
    for (int i = 0; i < v.size(); i++)
    {
        output += char(v[i] + 96);
    }
    cout << output;
}

int main()
{
    int n = 5;
    int k = 73;
    smallestString(n, k);
    return 0;
}