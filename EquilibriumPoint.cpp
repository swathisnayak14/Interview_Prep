// Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array.
// Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

// Example 1:

// Input:
// n = 5
// A[] = {1,3,5,2,2}
// Output: 3
// Explanation: For second test case
// equilibrium point is at position 3
// as elements before it (1+3) =
// elements after it (2+2).

// Example 2:

// Input:
// n = 1
// A[] = {1}
// Output: 1
// Explanation:
// Since its the only element hence
// its the only equilibrium point.

#include <bits/stdc++.h>
using namespace std;

int equipoint(int arr[], int n)
{
    int pos = -1, leftSum = 0, rightSum = 0;
    for (int i = 0; i < n; i++)
        rightSum += arr[i];
    for (int i = 0; i < n; i++)
    {
        rightSum -= arr[i];
        if (leftSum == rightSum)
        {
            pos = i + 1;
            break;
        }
        leftSum += arr[i];
    }
    return pos;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << equipoint(a, n);
    return 0;
}