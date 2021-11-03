// Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

// Example 1:

// Input:
// N = 4
// arr[] = {1, 5, 3, 2}
// Output: 2
// Explanation: There are 2 triplets:
// 1 + 2 = 3 and 3 +2 = 5

#include <bits/stdc++.h>
using namespace std;

int countTriplets(int a[], int n)
{
    int index[100000] = {0}, count = 0;
    for (int i = 0; i < n; i++)
        index[a[i]] = 1;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (index[a[i] + a[j]] == 1)
                count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout<<countTriplets(a, n);
    return 0;
}