// Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

// Example 1:

// Input:
// S = i.like.this.program.very.much
// Output: much.very.program.this.like.i
// Explanation: After reversing the whole
// string(not individual words), the input
// string becomes
// much.very.program.this.like.i
// Example 2:

// Input:
// S = pqr.mno
// Output: mno.pqr
// Explanation: After reversing the whole
// string , the input string becomes
// mno.pqr

#include <bits/stdc++.h>
using namespace std;

string reverseString(string S1)
{
    string S2;
    int len = S1.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (S1[i] == '.')
        {
            int r = len - i;
            len = i - 1;
            S2.append(S1.substr(i + 1, r));
            S2.append(".");
        }
    }
    S2.append(S1.substr(0, len + 1));
    return S2;
}
int main()
{
    string s;
    cin >> s;
    cout << reverseString(s) << endl;
    return 0;
}