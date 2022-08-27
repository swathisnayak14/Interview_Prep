// Input : aaaaaaaaaaaaaaaaaaaaaaaaaa
// Output : abcdefghijklmnopqrstuvwxyz
// Explanation: Second occurrence of letter 'a' will be
// replaced by 'b', third occurrence of letter 'a' will
// be first replaced by 'b' and then by 'c' and so on.

// Input : helloworld
// Output : Not Possible

#include <bits/stdc++.h>
using namespace std;

bool transformString(string& str)
{
    char ch = 'a';
    int n = str.length();
    if (n < 26)
        return false;

    for (int i = 0; i < n; i++)
    {
        if (int(ch) > int('z'))
            break;

        if (str[i] <= ch)
        {
            str[i] = ch;
            ch = char(int(ch) + 1);
        }
    }

    if (ch <= 'z')
        return false;
    return true;
}

int main()
{
    string str = "aaaaaaaaaaaaaaaaaaaaaaaaaa";
    if (transformString(str))
        cout << str << endl;
    else
        cout << "Not Possible" << endl;
    return 0;
}