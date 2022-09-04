// Input : man (pattern)
//         dhimanman (string)
// Output : 2

// Input : nn (pattern)
//         Banana (String)
// Output : 0

// Input : aa (pattern)
//         aaaaa (String)
// Output : 4

#include <bits/stdc++.h>
using namespace std;

int frequencySub(string &str, string &sub)
{
    int N = str.length();
    int M = sub.length();
    int res = 0;
    int j;
    for (int i = 0; i <= N - M; i++)
    {
        for (j = 0; i < M; j++)
        {
            if (str[i + j] != sub[j])
                break;
        }

        if (j == M)
            res++;
    }
    return res;
}
int main()
{
    string str = "dhimanman";
    string sub = "man";

    cout << frequencySub(str, sub);
    return 0;
}