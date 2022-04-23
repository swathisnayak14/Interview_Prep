// Given an array of positive numbers, find the maximum sum of a peak elements.
// Peak elements is defined as a element which is greater than it's adjacent element's.

// Given an array [5,4,7,23,8,1]

// The first element is only compared with it's immediate right element.

// 5 > 4 => 5 is included.
// 23 > 7 && 23 > 8 => 23 is included.
// So the maximum sum of given array is 5 + 23 = 28.
// Answer the question in most efficient way.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    int a[] = {5, 4, 7, 23, 8, 1};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (a[0] > a[1])
                sum += a[i];
        }
        if (a[i] > a[i + 1] && a[i] > a[i - 1])
            sum += a[i];
    }
    cout << sum;
    return 0;
}
