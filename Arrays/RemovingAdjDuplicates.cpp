// Input: azxxzy
// Output: ay

// First “azxxzy” is reduced to “azzy”.
// The string “azzy” contains duplicates,
// so it is further reduced to “ay”.
// Input: geeksforgeeg
// Output: gksfor

// First “geeksforgeeg” is reduced to “gksforgg”.
// The string “gksforgg” contains duplicates,
// so it is further reduced to “gksfor”.
// Input: caaabbbaacdddd
// Output: Empty String

// Input: acaaabbbacdddd 
// Output: acabac

#include <bits/stdc++.h>
using namespace std;

string removeAdjDup(string str)
{
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        if (s.empty())
        {
            s.push(str[i]);
        }
        else
        {
            if (s.top() == str[i])
            {
                s.pop();
            }
            else
            {
                s.push(str[i]);
            }
        }
    }

    string res = "";
    while (!s.empty())
    {
        res = res + s.top();
        s.pop();
    }
    reverse(res.begin(), res.end());

    return res;
}

int main()
{
    string str = "aaccdd";
    cout << removeAdjDup(str);
    return 0;
}