// Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.

// Note: Left and right side elements can be equal to required element. And extreme elements cannot be required element.

// Example 1:

// Input:
// N = 4
// A[] = {4, 2, 5, 7}
// Output:
// 5
// Explanation:
// Elements on left of 5 are smaller than 5
// and on right of it are greater than 5.

// Example 2:

// Input:
// N = 3
// A[] = {11, 9, 12}
// Output:
// -1

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], min[n], max[n]; // 4 3 2 7 8 9

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ele = -1, big = a[0], small = a[n - 1];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > big)
            big = a[i];
        max[i] = big; // 4 4 4 7 8 9
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] < small)
            small = a[i];
        min[i] = small; // 2 2 2 7 8 9
    }

    for (int i = 0; i < n; i++)
    {
        if (i != 0 && i != n - 1 && min[i] == max[i])
        {
            ele = min[i];
            break;
        }
    }
    cout << ele;
    return 0;
}