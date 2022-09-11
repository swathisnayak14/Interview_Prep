// Input: s1="ABACD"
//        s2="CDABA"
// Output:1

// Approach: We add string s1 two times. So here we get ABACDABACD. Now we check if string s2 is a substring of s1. If so, thne print 1(yes) or else
// 0 (no). We should even consider that the length of two strings should be the same.

#include <bits/stdc++.h>
using namespace std;
bool rotation(string s1, string s2)
{
    int l1 = s1.length();
    int l2 = s2.length();
    if (l1 != l2)
        return false;
    else
    {
        string temp = s1 + s1;
        if (temp.find(s2) != string::npos)
            return true;
        else

            return false;
    }
}
int main()
{
    string s1 = "ABACD";
    string s2 = "CDABA";
    cout << rotation(s1, s2);
    return 0;
}