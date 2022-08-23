// Input: jewels="aA",stones="aAAbbbb"
// Ouput:3

#include <bits/stdc++.h>
using namespace std;

int jTos(string j, string s)
{
    int count = 0;
    int m = j.size();
    int n = s.size();
    map<char, bool> mp;

    for (int i = 0; i < m; i++)
    {
        mp[j[i]] = true;
    }

    for (int i = 0; i < n; i++)
    {
        if (mp[s[i]] == true)
            count++;
    }
    return count;
}

int main()
{
    string j = "aA";
    string s = "aAAbbbb";
    cout << jTos(j, s);
    return 0;
}