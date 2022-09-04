// Input:"??yw?ipkj?"
// Output:"abywaipkja"

// Convert all the '?' characters to lowercase letters such that the final string doesnt contain any consecutive repeating characters. You cannot
// modify the non '?'characters. If the output has more number of possible strings, return any of them.

#include <bits/stdc++.h>
using namespace std;

string replaceAll(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            for (char j = 'a'; j <= 'z'; j++)
            {
                if (i - 1 >= 0 && s[i - 1] == j)
                    continue;

                if (i + 1 < n && s[i + 1] == j)
                    continue;
                s[i] = j;
                break;
            }
        }
    }
    return s;
}

int main()
{
    string s = "??yw?ipkj?";
    string res = replaceAll(s);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
    }
    return 0;
}