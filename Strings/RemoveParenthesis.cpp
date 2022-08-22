// INPUT:(()()())(())
// OUPUT:()()()remove outermost parenthesis ie: ( ()()() ) ( () )
// ASCII VALUE OF (=40 AND )=41
#include <bits/stdc++.h>
using namespace std;

string removeParenthesis(string str)
{
    string res = "";
    int n = str.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 41)
            j--;

        if (j != 0)
            res = res + str[i];

        if (str[i] == 40)
            j++;
    }

    return res;
}
int main()
{
    string str = "(()()())(())";
    string ans = removeParenthesis(str);
    for (int i = 0; i <ans.size(); i++)
        cout << ans[i];
    return 0;
}