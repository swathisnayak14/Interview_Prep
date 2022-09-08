// string str is a valid password if
// 1.atleast 4 char
// 2.atleast one numeric digit
// 3.not have space a or slash
// 4.atleast one capital letter
// 5.starting char must not be a number

#include <bits/stdc++.h>
using namespace std;

int passwordChecker(string str)
{
    int n = str.length();
    bool num = false;

    bool capital = false;
    if (n < 4)
        return 0;

    if (str[0] >= 48 && str[0] <= 57)
        return 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ' || str[i] == '/')
        {
            return 0;
        }

        else if (str[i] >= 65 && str[i] <= 90)
            capital = true;

        else if (str[i] >= 48 && str[i] <= 57)
            num = true;
    }

    int res = (num && capital); // if true then true

    return res;
}
int main()
{
    string str = "abC123";
    cout << passwordChecker(str);
    return 0;
}