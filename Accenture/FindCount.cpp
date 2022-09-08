// Input:arr[]={12,3,14,56,77,13}
//       num=13
//       diff=2
// Output:3

// Explaination: the difference of num and arr[0] is 1 and 1 is less than 2 so increase the count to 1.
//               similarly do for all the other array numbers.
//              if there are no such elements whose difference are less than the diff then return -1.

#include <bits/stdc++.h>
using namespace std;

int findCount(int arr[], int n, int num, int diff)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int res = abs(num - arr[i]);
        if (res <= diff)
        {
            count++;
        }
    }
    if (count > 0)
        return count;
    else
        return -1;
}
int main()
{
    int arr[] = {12, 3, 14, 56, 77, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = 13;
    int diff = 2;
    cout << findCount(arr, n, num, diff);
    return 0;
}