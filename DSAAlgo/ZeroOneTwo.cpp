// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include <bits/stdc++.h>
using namespace std;

void ZeroOneTwo(int arr[], int n)
{
    int c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            c0++;
        else if (arr[i] == 1)
            c1++;
        else
            c2++;
    }

    int k = 0;
    for (int i = 0; i < c0; i++)
        arr[k++] = 0;

    for (int i = 0; i < c1; i++)
        arr[k++] = 1;

    for (int i = 0; i < c2; i++)
        arr[k++] = 2;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {0, 1, 2, 2, 0, 1, 1, 2, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    ZeroOneTwo(arr, n);
    return 0;
}