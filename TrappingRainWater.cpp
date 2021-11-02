// Input:
// N = 6
// arr[] = {3,0,0,2,0,4}
// Output:
// 10
// Explanation:

// Example 2:

// Input:
// N = 4
// arr[] = {7,4,0,9}
// Output:
// 10
// Explanation:
// Water trapped by above
// block of height 4 is 3 units and above
// block of height 0 is 7 units. So, the
// total unit of water trapped is 10 units.
// Example 3:

// Input:
// N = 3
// arr[] = {6,9,9}
// Output:
// 0
// Explanation:
// No water will be trapped.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int water = 0, lmax = 0, rmax = 0;
    int n;
    cin >> n;
    int a[n], L[n], R[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > lmax)
            lmax = a[i - 1];
        L[i] = lmax;
    }

    for (int i = n- 2; i >= 0; i--)
    {
        if (a[i + 1] > rmax)
            rmax = a[i + 1];
        R[i] = rmax;
    }

    int minlr;
    for (int i = 1; i < n - 1; i++)
    {
        minlr = min(L[i], R[i]);
        if (minlr > a[i])
            water += minlr - a[i];
    }
    cout << water << endl;
    return 0;
}