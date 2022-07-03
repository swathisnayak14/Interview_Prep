// Rearrange Odd and Even values in Alternate Fashion in Ascending Order
// Input − int arr[] = { 1, 1, 2, 2, 5, 4 }

// Output − Rearrangement of Odd and Even values in Alternate Fashion in Ascending Order is: 1 2 1 2 5 4.

// Explanation − We are given an integer type array. Now we will check which is the smallest element in an array
// i.e. 1 which is the odd value so elements will be arranged in odd first and even second manner i.e. 1 2 1 2 5 4 is the final output

#include <bits/stdc++.h>
using namespace std;

void AlternateRearrange(int arr[], int n)
{
    sort(arr, arr + n);
    vector<int> even;
    vector<int> odd;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even.push_back(arr[i]);
        else
            odd.push_back(arr[i]);
    }

    int index = 0, i = 0, j = 0;
    if (arr[0] % 2 == 0)
        flag = true;
    while (index < n)
    {
        if (flag == true)
        {
            arr[index++] = even[i++];
            flag = !flag;
        }
        else
        {
            arr[index++] = odd[j++];
            flag = !flag;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {9, 8, 13,1, 2, 19, 14};
    int n = sizeof(arr) / sizeof(int);
    AlternateRearrange(arr, n);
    return 0;
}