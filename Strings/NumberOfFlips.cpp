// Input : str = “001”
// Output : 1
// Minimum number of flips required = 1
// We can flip 1st bit from 0 to 1

// Input : str = “0001010111”
// Output : 2
// Minimum number of flips required = 2
// We can flip 2nd bit from 0 to 1 and 9th
// bit from 1 to 0 to make alternate
// string “0101010101”.

// APPROACH

// string=0 0 0 1 0 1 0 1 1 1

// case1: 0 1 0 1 0 1 0 1 0 1  if in even places 1 and odd places zero increase count.
// case2: 1 0 1 0 1 0 1 0 1 0  if in even places 0 and odd places one increasecount.

#include <bits/stdc++.h>
using namespace std;

int binaryFlips(string str)
{
    int c1 = 0, c2 = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (i & 1 and str[i] == '0') // checking for the odd index
            c1++;

        if (i % 2 == 0 and str[i] == '1')
            c1++;

        if (i & 1 and str[i] == '1')
            c2++;

        if (i % 2 == 0 and str[i] == '0')
            c2++;
    }
    int ans=min(c1,c2);
    return ans;
}

int main()
{
    string str = "001010111";
    cout << binaryFlips(str);
    return 0;
}