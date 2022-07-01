// Input arr[] = [1, 2, 3, 4, 5, 6, 7], d = 2, n =7
// 1) Store the first d elements in a temp array
//    temp[] = [1, 2]
// 2) Shift rest of the arr[]
//    arr[] = [3, 4, 5, 6, 7, 6, 7]
// 3) Store back the d elements
//    arr[] = [3, 4, 5, 6, 7, 1, 2]

#include <bits/stdc++.h>
using namespace std;

void rotationArray(int arr[], int n)
{
    int d, temp;
    cin >> d; // direction to be shifted
    int pos;
    cin >> pos; // by how many positions to shift
    while (pos > 0)
    {
        if (d == 1) // left shift
        {
            temp = arr[0];
            for (int i = 0; i < n; i++)
                arr[i] = arr[i + 1];
            arr[n - 1] = temp;
        }
        else if (d == 0)
        {
            temp = arr[n - 1];
            for (int i = n - 1; i > 0; i--)
                arr[i] = arr[i - 1];
            arr[0] = temp;
        }
        pos--;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    rotationArray(arr, 8);
    return 0;
}