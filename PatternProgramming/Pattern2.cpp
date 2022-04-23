// *
// * * *
// * * * * *
// * * * * * * *
// * * * * * * * * *

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, k = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            cout << "* ";
        }
        k += 2;
        cout << endl;
    }
    return 0;
}