// Example 1:
// Input: s = "bcabc"
// Output: “bca"

// Explanation: Duplicate Characters are removed
// Example 2:
// Input: s = "cbacdcbc"
// Output: "cbad"
// Explanation: Duplicate Characters are removed
#include <bits/stdc++.h>
using namespace std;

void findDuplicate(string str)
{
    int n = str.length();
    string result = "";
    int hash[123] = {0};
    for (int i = 0; i < n; i++)
    {
        if (hash[str[i]] == 0)
        {
            hash[str[i]] = 1;
            result += str[i];
        }
    }
    cout << result;
}

int main()
{
    string str = "bcabc";
    findDuplicate(str);
    return 0;
}