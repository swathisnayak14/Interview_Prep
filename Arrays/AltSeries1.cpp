// Program To Find The Nth Term Of The Series : 3, 8, 6, 11, 9, 14, 12, 17, 15, 20

// Examples:

// Input : 30
// Output : 50

// Input : 9
// Output : 15

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    if (n <= 0)
        cout << "0" << endl;

    int a[n];
    a[0] = 3;
    a[1] = 8;
    for (i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            a[i] = a[i - 2] + 3;
        }
        else
        {
            a[i] = a[i - 2] + 3;
        }
    }
    cout << a[n - 1] << endl;
    return 0;
}
