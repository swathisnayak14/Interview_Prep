// Program To Find Nth Term In The Series : 0,0,7,6,14,12,21,18...

// Example :

// Input : N = 10
// Output : 24

// Input : N = 5
// Output : 14
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << (n % 2 == 0 ? 6 * (n / 2 - 1) : 7 * (n / 2));
    return 0;
}
