// Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum 
//and return its sum.

// Example 1:

// Input:
// N = 5
// Arr[] = {1,2,3,-2,5}
// 9
// Explanation:
// Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which
// is a contiguous subarray.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int Lmax = a[0], Gmax = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > (a[i] + Lmax))//5>8
            Lmax = a[i];
        else
            Lmax += a[i];//3
        Gmax = max(Gmax, Lmax);
    }
    cout << Gmax;
    return 0;
}