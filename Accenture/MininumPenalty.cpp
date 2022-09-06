// Input:3
//     {1,2,3}

// Output:2

// Explaination: The order that incurs the minimum penalty id 1,2,3. The penalty is abs(2-1)+abs(3-2)=2

#include <bits/stdc++.h>
using namespace std;

int minPenalty(int arr[], int n)
{
    sort(arr,arr+n);
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        res += (arr[i] - arr[i - 1]);
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << minPenalty(arr, n);
    return 0;
}
