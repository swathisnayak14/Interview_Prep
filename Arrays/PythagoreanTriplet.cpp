// Given an array arr of N integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2, otherwise false.

// Example 1:

// Input:
// N = 5
// Arr[] = {3, 2, 4, 6, 5}
// Output: Yes
// Explanation: a=3, b=4, and c=5 forms a
// pythagorean triplet.
// Example 2:

// Input:
// N = 3
// Arr[] = {3, 8, 5}
// Output: No
// Explanation: No such triplet possible.

#include <bits/stdc++.h>
using namespace std;

int triplet(int arr[], int n)
{
    sort(arr, arr + n);
    int i, L, R, num, sum; // 2 3 4 5 6
    for (i = n - 1; i > 1; i--)
    {
        L = 0;
        R = i - 1;
        num = arr[i] * arr[i];
        while (L < R)
        {
            sum = (arr[L] * arr[L]) + (arr[R] * arr[R]);
            if (sum == num)
                return true;
            else if (sum > num)
                R--;
            else
                L++;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << triplet(a, n);
    return 0;
}