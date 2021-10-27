// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

// Example 1:

// Input:
// N = 5
// A[] = {1,2,3,5}
// Output: 4

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int a[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int total = (n * (n + 1)) / 2;
    cout << total - sum << endl;
    return 0;
}