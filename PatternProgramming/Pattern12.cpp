//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout <<char(j + 64)<< " ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << char(j + 64) << " ";
        }
        cout << endl;
    }
    return 0;
}