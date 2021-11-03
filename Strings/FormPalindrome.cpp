// Given a string, find the minimum number of characters to be inserted to convert it to palindrome.
// For Example:
// ab: Number of insertions required is 1. bab or aba
// aa: Number of insertions required is 0. aa
// abcd: Number of insertions required is 3. dcbabcd

// Example 1:

// Input: str = "abcd"
// Output: 3
// Explanation: Inserted character marked
// with bold characters in dcbabcd
// Example 2:

// Input: str = "aa"
// Output: 0
// Explanation:"aa" is already a palindrome.

#include <bits/stdc++.h>
using namespace std;

int LCS(string a, string b, int n)
{
    int DP[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                DP[i][j] = 0;
            else if (a[i - 1] == b[j - 1])
                DP[i][j] = 1 + DP[i - 1][j - 1];
            else
                DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
        }
    }
    return DP[n][n];
}
int palindrome(string s1)
{
    string s2 = s1;
    int n = s1.length();
    reverse(s2.begin(), s2.end());
    int len = LCS(s1, s2, n);
    int insertions = n - len;
    return insertions;
}
int main()
{
    string s;
    cin >> s;
    cout << palindrome(s) << endl;
    return 0;
}