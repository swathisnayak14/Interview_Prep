// Given a string S consisting only '0's and '1's,  find the last index of the '1' present in it.

// Example 1:

// Input:
// S = 00001
// Output:
// 4
// Explanation:
// Last index of  1 in given string is 4.

// Example 2:

// Input:
// 0
// Output:
// -1
// Explanation:
// Since, 1 is not present, so output is -1.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int pos = -1;
    string str;
    cin >> str;
    int length = str.length();
    for (int i = length - 1; i >= 0; i--)
    {
        if (str[i] == '1')
        {
            pos = i;
            break;
        }
    }
    cout << pos;
    return 0;
}