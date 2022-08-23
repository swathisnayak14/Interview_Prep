// Input:()((()()))
// Ouput:((()))
// ASCII: (:40
//        ):41

#include <bits/stdc++.h>
using namespace std;
void ValidParenthesis(string s)
{
    int n = s.size();
    int count = 0;
    int maxVal = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 40)
            count++;
        else
        {
            count--;
        }
        maxVal = max(maxVal, count);
    }

    for (int i = 0; i < maxVal; i++)
        cout << char(40);
    for (int i = 0; i < maxVal; i++)
        cout << char(41);
}

int main()
{
    string s = "()((()()))";
    ValidParenthesis(s);
    return 0;
}