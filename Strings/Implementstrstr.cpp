// Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s. The function returns and integer denoting the first occurrence of the string x in s (0 based indexing).

// Note: You are not allowed to use inbuilt function.

// Example 1:

// Input:
// s = GeeksForGeeks, x = Fr
// Output: -1
// Explanation: Fr is not present in the
// string GeeksForGeeks as substring.

// Example 2:

// Input:
// s = GeeksForGeeks, x = For
// Output: 5
// Explanation: For is present as substring
// in GeeksForGeeks from index 5 (0 based
// indexing).

#include <bits/stdc++.h>
using namespace std;
int strstr(string s1, string x)
{
    int lens1 = s1.length();
    int lenx = x.length();
    int flag;
    for (int i = 0; i < lens1; i++)
    {
        if (s1[i] == x[0])
        {
            flag = 0;
            for (int j = 0; j < lenx; j++)
            {
                if (s1[i + j] != x[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                return i;
        }
    }
    return -1;
}
int main()
{
    string a, b;
    cin >> a >> b;
    cout << strstr(a, b) << endl;
    return 0;
}