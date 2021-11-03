// Given a string without spaces, the task is to remove duplicates from it.

// Note: The original order of characters must be kept the same.

// Example 1:

// Input: S = "zvvo"
// Output: "zvo"
// Explanation: Only keep the first
// occurrence
// Example 2:

// Input: S = "gfg"
// Output: gf
// Explanation: Only keep the first
// occurrence

#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s1)
{
    string out = "";
    int count[26] = {0};
    int len = s1.length();
    for (int i = 0; i < len; i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            if (count[s1[i] - 'a']++ == 0)
                out += s1[i];
        }
        else if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            if (count[s1[i] - 'A']++ == 0)
                out += s1[i];
        }
    }
    return out;
}
int main()
{
    string s;
    cin >> s;
    cout << removeDuplicates(s) << endl;
    return 0;
}