// Given a array of N strings, find the longest common prefix among all strings present in the array.

// Example 1:

// Input:
// N = 4
// arr[] = {geeksforgeeks, geeks, geek,
//          geezer}
// Output: gee
// Explanation: "gee" is the longest common
// prefix in all the given strings.
// Example 2:

// Input:
// N = 2
// arr[] = {hello, world}
// Output: -1
// Explanation: There's no common prefix
// in the given strings.

#include <bits/stdc++.h>
using namespace std;

string longestPrefix(string a[], int n)
{
    int count = 0, flag = 0, min = 1000;
    string s;
    for (int i = 0; i < n; i++)
    {
        int len = a[i].length();
        if (len < min)
        {
            min = len;
            s = a[i];
        }
    }

    for (int i = 0; i < min; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j][i] != s[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
        count++;
    }
    if (count == 0)
        return "-1";
    else
        return s.substr(0, count);
}
int main()
{
    // string arr[] = {"geeksforgeeks", "geeks", "geek", "geezer"};
    string arr[] = {"hello", "world"};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << longestPrefix(arr, n) << endl;
    return 0;
}