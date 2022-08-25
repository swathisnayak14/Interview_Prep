#include <bits/stdc++.h>
using namespace std;
int minFreq(string str)
{
    map<char, int> mp;
    char ch;
    int min = 999;
    for (int i = 0; i < str.size(); i++)
    {
        mp[str[i]]++;
    }

    for (auto it : mp)
    {
        if (it.second < min)
        {
            min = it.second;
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