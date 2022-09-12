// Input : str = "abcd"
// Output : 4
// Explanation :- palindromic  subsequence are : "a" ,"b", "c" ,"d"

// Input : str = "aab"
// Output : 4
// Explanation :- palindromic subsequence are :"a", "a", "b", "aa"

// Input : str = "aaaa"
// Output : 15

#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];

int func(int i, int j, string s)
{
    if (i > j)
        return 0;
    if (i == j)
        return 1;

    if (dp[i][j] != -1)
        return dp[i][j];

    if (s[i] == s[j])
        return dp[i][j] = func(i + 1, j, s) + func(i, j - 1, s) + 1;

    else
        return dp[i][j] = func(i + 1, j, s) + func(i, j - 1, s) + func(i + 1, j - 1, s);
}
int countOfPalindromicSequence(string str)
{
    int n = str.length();
    dp[n][n];
    memset(dp, -1, sizeof(dp));
    func(0, n - 1, str);
}

int main()
{
    int dp[1001][1001];
    string str = "abcd";
    cout << countOfPalindromicSequence(str);
    return 0;
}