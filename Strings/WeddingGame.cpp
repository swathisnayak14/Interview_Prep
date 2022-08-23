// Given a string of consecutive digits and a number Y, the task is to find the number of minimum sets such that every set follows the below rule:

// Set should contain consecutive numbers
// No digit can be used more than once.
// The number in the set should not be more than Y.
// Examples:

// Input: s = "1234", Y = 30
// Output: 3
// Three sets of {12, 3, 4}

// Input: s = "1234", Y = 4
// Output: 4
// Four sets of {1}, {2}, {3}, {4}

#include <bits/stdc++.h>
using namespace std;

int weddingGame(string s, int y)
{
    int n = s.size();
    int flag = 0, count = 0, num = 0;
    for (int i = 0; i < n; i++)
    {
        num = num * 10 + (s[i] - '0');
        if (num <= y)
        {
            flag = 1;
        }
        else
        {
            if (flag)
            {
                count++;
            }

            num = s[i] - '0';
            flag = 0;

            if (num <= y)
            {
                flag = 1;
            }
            else
            {
                num = 0;
            }
        }
    }
    if (flag)
        count++;
    return count;
}

int main()
{
    string s = "1234";
    int y = 30;
    cout << weddingGame(s, y);
    return 0;
}