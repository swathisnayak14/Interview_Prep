// Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. Merge them in sorted order without using any extra space. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.

// Example 1:

// Input:
// n = 4, arr1[] = [1 3 5 7]
// m = 5, arr2[] = [0 2 6 8 9]
// Output:
// arr1[] = [0 1 2 3]
// arr2[] = [5 6 7 8 9]
// Explanation:
// After merging the two
// non-decreasing arrays, we get,
// 0 1 2 3 5 6 7 8 9.

#include <bits/stdc++.h>
using namespace std;

void sortedarray(int a1[], int a2[], int n, int m)
{
    int i = n - 1;
    int j = 0;
    while (i >= 0 && j < m)
    {
        if (a1[i] > a2[j])
            swap(a1[i], a2[j]);
        i--;
        j++;
    }
    sort(a1, a1 + n);
    sort(a2, a2 + m);
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    sortedarray(arr1, arr2, n, m);
    for (int i = 0; i < n; i++)
        cout << arr1[i] << " ";
    for (int i = 0; i < m; i++)
        cout << arr2[i] << " ";
    return 0;
}