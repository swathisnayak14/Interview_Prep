// Input:s1=xy
//       s2=12
//       res=x1y2
//  Output: 1

// EXplaination: the length of the concatenation of s1 and s2 shpould be equal to res. The order in which the s1 and s2 are present should also be
// same. ie: first if x is present in s1 then in res x should be present. If true then return 1 indicarion true.

#include <bits/stdc++.h>
using namespace std;

void validShuffle(string s1, string s2, string res)
{
    int l1 = s1.length();
    int l2 = s2.length();
    int l3 = res.length();
    int i = 0, j = 0, k = 0;
    if ((l1 + l2) != l3)
    {
        cout << "no"; // indicates that the length of concatenation of two strings are not equal with res's length
        exit(0);
    }

    else
    {
        while (k < l3)
        {
            if (i < l1 and s1[i] == res[k])
                i++;
            else if (j < l2 and s2[j] == res[k])
                j++;
            else
                break; // indicates that if the first characters of both the strings s1 and s2 is not equal with the res, then it is invalid.
            k++;       // the l3 should should move forward for all the iterations for if inorder to calculate.
        }
        if (i < l1 || j < l2)
            cout << "NO";
        else
            cout << "YES";
    }
}

int main()
{
    string s1 = "xy";
    string s2 = "12";
    string res = "x12y";
    validShuffle(s1, s2, res);
    return 0;
}