// Input: str = "aabb"
// Output: "ab"

// Input: str = "aab"
// Output: "a"
// The two subsequence are 'a'(first) and 'a'
// (second). Note that 'b' cannot be considered
// as part of subsequence as it would be at same
// index in both.

#include <bits/stdc++.h>
using namespace std;
int longestRecurringSubstring(string str)
{
    int n = str.length();
    int dp[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 or j == 0)
                dp[i][j] = 0;

            else if(str[i-1]==str[j-1] and i!=j)
                dp[i][j]=dp[i-1][j-1]+1;
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][n];
}
int main()
{
    string str = "aabb";
    cout << longestRecurringSubstring(str);
    return 0;
}