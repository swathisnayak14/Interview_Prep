// Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.

// Note: You are not allowed to use inbuilt function.

// Example 1:

// Input:
// str = 123
// Output: 123
// Example 2:

// Input:
// str = 21a
// Output: -1
// Explanation: Output is -1 as all
// characters are not digit only.

#include <bits/stdc++.h>
using namespace std;

int asciiToInt(string s1)
{
    int sign = 0, len = s1.length();
    int out;
    for (int i = 0; i < len; i++)
    {
        if (i == 0 && s1[i] == 45)
        {
            sign = 1;
            continue;
        }
        else if (s1[i] >= '0' && s1[i] <= '9')
        {
            if (i == 0)
                out = s1[i] - 48;
            else
            {
                out *= 10;
                out += (s1[i] - 48);
            }
        }
        else
        {
            return -1;
        }
    }
    if (sign == 1)
        out = 0 - out;
    return out;
}
int main()
{
    string s;
    cin >> s;
    cout << asciiToInt(s) << endl;
    return 0;
}