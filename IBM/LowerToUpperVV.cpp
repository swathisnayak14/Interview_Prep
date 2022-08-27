#include <bits/stdc++.h>
using namespace std;

string LwrToUpprVV(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else
        {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

int main()
{
    string str = "WhAT iS YouR nAme?";
    cout << LwrToUpprVV(str);
    return 0;
}