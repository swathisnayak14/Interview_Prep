//  0 1 2 3  4 5 6
//         *
//       * * *
//     * * * * *
//   * * * * * * *


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= k; j++)
        {
            cout << "* ";
        }
        k+=2;
        cout << endl;
    }
    return 0;
}