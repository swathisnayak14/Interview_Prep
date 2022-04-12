// Move all the negative elements to one side of the array

#include <bits/stdc++.h>
using namespace std;

void NegativeOneSide(int arr[], int n)
{
    int pivot = 0, i = -1;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {9, 0, -19, 2 - 6, -27, 10, -14};
    int n = sizeof(arr) / sizeof(arr[0]);
    NegativeOneSide(arr, n);
    return 0;
}