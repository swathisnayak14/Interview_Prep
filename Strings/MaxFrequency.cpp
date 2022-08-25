#include <bits/stdc++.h>
using namespace std;
int minFreq(string str)
{
    map<char, int> mp;
    char ch;
    int max = 0;
    for (int i = 0; i < str.size(); i++)
    {
        mp[str[i]]++;
    }

    for (auto it : mp)
    {
        if (it.second > max)
        {
            max = it.second;
            ch = it.first;
        }
    }
    cout << ch;
    return 0;
}
int main()
{
    string str = "hello";
    minFreq(str);
    return 0;
}