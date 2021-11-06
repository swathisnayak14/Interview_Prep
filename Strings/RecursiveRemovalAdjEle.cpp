// Given a string s, remove all its adjacent duplicate characters recursively.

// Example 1:

// Input:
// S = "geeksforgeek"
// Output: "gksforgk"
// Explanation:
// g(ee)ksforg(ee)k -> gksforgkâ€‹

// Example 2:

// Input:
// S = "acaaabbbacdddd"
// Output: "acac"
// Explanation:
// ac(aaa)(bbb)ac(dddd) -> acac

#include <bits/stdc++.h>
using namespace std;

string remove(string s1)
{
    string s2;
    int len = s1.length(), l = 0, r, flag, last = 0;

    for (int i = 0; i < len;)
    {
        int j = i + 1;
        flag = 0;
        while ((s1[i] == s1[j]) && (j < len))
        {
            j++;
            flag = 1;
            last = 1;
        }
        if (flag == 1)
        {
            l = j;
            i = j;
        }
        else
        {
            r = i;
            s2.append(s1.substr(l, (r - l + 1)));
            l = j;
            i++;
        }
    }
    if (last == 0)
        return s2;
    else
        return remove(s2);
}
int main()
{
    // string s="geeksforgeek";
    string s = "acaaabbbacdddd";
    cout << remove(s) << endl;
    return 0;
}