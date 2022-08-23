// input:HelloWorld
// ouput:hElLoWoRlD

#include <bits/stdc++.h>
using namespace std;

string alternateCases(string str)
{
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            str[i] = tolower(str[i]);

        else
            str[i] = toupper(str[i]);
    }

    return str;
}
int main()
{
    string str = "HelloWorld";
    cout << alternateCases(str);
    return 0;
}