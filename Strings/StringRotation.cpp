// Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.

// Example 1:

// Input:
// a = amazon
// b = azonam
// Output: 1
// Explanation: amazon can be rotated anti
// clockwise by two places, which will make
// it as azonam.
// Example 2:

// Input:
// a = geeksforgeeks
// b = geeksgeeksfor
// Output: 0
// Explanation: If we rotate geeksforgeeks by
// two place in any direction , we won't get
// geeksgeeksfor.

#include <bits/stdc++.h>
using namespace std;

bool rotation(string s1, string s2)
{
    string temp1, temp2;
    int len1 = s1.length(), len2 = s2.length();
    if (len1 < 2 || len2 < 2)
    {
        if (s1 == s2)
            return true;
        else
            return false;
    }
    temp1.append(s1.substr(2, len1 - 2));
    temp1.append(s1.substr(0, 2));

    temp2.append(s1.substr(len1 - 2, 2));
    temp2.append(s1.substr(0, len1 - 2));
    if (temp1 == s2 || temp2 == s2)
        return true;
    else
        return false;
}
int main()
{
    string s, b;
    cin >> s >> b;
    cout << rotation(s, b) << endl;

    return 0;
}