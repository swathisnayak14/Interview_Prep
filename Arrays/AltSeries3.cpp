// Program To Find Nth Term In The Series : 0 0 2 1 4 2 6 3 8 4 10 5 12 6 14 7 16 8 18 9

// Example :

// Input : N = 10
// Output : 4

// Input : N = 7
// Output : 6

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << 0;
        exit(0);
    }
    int a[n];
    a[0] = 0;
    a[1] = 0;
    for (i = 2; i < n; i++)
    {
        if (i % 2 == 0)
            a[i] = i;
        else
            a[i] = a[i - 2] + 1;
    }
    cout << a[n - 1];
    return 0;
}