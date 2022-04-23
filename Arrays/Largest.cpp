// Given an array [5,4,7,23,8,1] of positive numbers, count the number of larger elements lower index for 3 values.

// NOTE : If there are less that 3 elements in the array, return 0
//        If there are no elements in the array, return -1

// Example : (a > b > c) In the linear fashion of array elements.
          
//         5 > 4 > 1 => count++
//         23 > 8 > 1 => count++
//         Theerfore, count = 2

// Input : Array of n elements : 5,4,7,23,8,1
// Output : 2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {5, 4, 7, 23, 8, 1};
    int i, j, k, count = 0;
    int n = sizeof(a) / sizeof(a[0]);
    if (n == 0)
        return -1;
    else if (n > 0 && n < 3)
        return 0;
    else
    {
        for (int i = 0, j = i + 1; i < n - 2, j < n - 1; i++, j++)
            for (int k = j + 1; k < n; k++)
                if (a[i] > a[j] && a[j] > a[k])
                    count++;
    }
    cout << count;
}