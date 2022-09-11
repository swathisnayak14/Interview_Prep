// Given a binary string str of length N, the task is to find the maximum count of consecutive substrings str can be divided into such that all
// the substrings are balanced i.e. they have equal number of 0s and 1s. If it is not possible to split str satisfying the conditions then print -1.
// Example:

// Input: str = “0100110101”
// Output: 4
// The required substrings are “01”, “0011”, “01” and “01”.
// Input: str = “0111100010”
// Output: 3

// Input: str = “0000000000”

// Output: -1

#include <bits/stdc++.h>
using namespace std;

int equalBinaryString(string str)
{
    int n=str.length();
    int ones=0,zeroes=0;
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
            zeroes++;
        else
            ones++;

        if(zeroes==ones)
            count++;
    }

    if(zeroes!=ones)
        return -1;
    else
        return count;
}

int main()
{
    string str ="0100110101";
    cout<<equalBinaryString(str);
    return 0;
}