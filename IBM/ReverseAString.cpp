#include <bits/stdc++.h>
using namespace std;

string reverseStr(string str)
{
    string ans = "";
    int n = str.length();
    for (int i = n; i >= 0; i--)
    {
        ans = ans + str[i];
    }
    return ans;
}

int main()
{
    string str = "hello";
    cout << reverseStr(str);
    return 0;
}