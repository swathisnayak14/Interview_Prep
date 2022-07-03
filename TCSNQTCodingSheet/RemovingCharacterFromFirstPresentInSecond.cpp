// Example 1:
// Input: String str1 = “abcdef”
//        String str2 = “cefz”
// Output: abd
// Explanation: The common characters in both strings are c, e, f.
// So after removing these characters from string 1 we get string resulting string as abd.

// Example 2:
// Input: String str1 = “xyzpw”
//        String str2 = “lmno”
// Output: xyzpw
// Explanation: As there is no common character in both the strings, string 1 remains unchanged

#include <bits/stdc++.h>
using namespace std;
void firstIneSecond(string str1, string str2)
{
    unordered_map<char, int> m;
    string ans = "";
    int len1 = str1.length();
    int len2 = str2.length();
    for (int i = 0; i < len2; i++)
        m[str2[i]] = 1;
    for (int i = 0; i < len1; i++)
    {
        if (!m[str1[i]])
            ans.push_back(str1[i]);
    }
    cout << ans;
}

int main()
{
    string str1 = "abcdef";
    string str2 = "cefz";
    firstIneSecond(str1, str2);
}