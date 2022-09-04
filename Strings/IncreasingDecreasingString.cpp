// Input:s="aaaabbbbcccc"
// Output:"abccbaabccba"

#include <bits/stdc++.h>
using namespace std;

string increDecre(string str)
{
    string res = "";
    int arr[26] = {0};
    int k = 0;
    for (int i = 0; i < str.size(); i++)
    {
        arr[str[i] - 'a']++;
        k++;
    }

    while (k)
    {
        for (int i = 0; i < 26; i++) // increasing ie:abc
        {
            if (arr[i] > 0)
            {
                res += i + 'a';
                k--;
                arr[i]--;
            }
        }

        for (int i = 25; i >= 0; i--) // decreasing ie:cba
        {
            if (arr[i] > 0)
            {
                res += i + 'a';
                k--;
                arr[i]--;
            }
        }
    }

    return res;
}

int main()
{
    string str = "aaaabbbbcccc";
    string res = increDecre(str);

    for (int i = 0; i < res.size(); i++)
        cout << res[i];
    return 0;
}