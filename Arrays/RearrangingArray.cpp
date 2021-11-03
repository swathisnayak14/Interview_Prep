// Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.

// Example 1:

// Input:
// N = 6
// arr[] = {1,2,3,4,5,6}
// Output: 6 1 5 2 4 3
// Explanation: Max element = 6, min = 1,
// second max = 5, second min = 2, and
// so on... Modified array is : 6 1 5 2 4 3

// formulae:

// for even index values-
// a[i]=a[i]+((a[max]%M)*M)

// for odd index values-
// a[i]=a[i]+((a[min]%M)*M)

// we are dividing by M

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int min = 0, max = n - 1, M = a[n - 1] + 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a[i] = a[i] + ((a[max] % M) * M);
            max--;
        }
        else
        {
            a[i] = a[i] + ((a[min] % M) * M);
            min++;
        }
        cout << a[i] / M << " ";
    }
    cout << endl;
    return 0;
}