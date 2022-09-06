// Given an array of size n. It contains only 0s and 1s in it. Find maximum length of subarray where there are equal number of 0s and 1s
// present

// Input:0,0,1,0,1
// Output:4

// Explaination:
//   0 1 0 1 are the equal number of 0 and 1 so count is 4.

#include <bits/stdc++.h>
using namespace std;
int MaxLength(int arr[], int n)
{
    unordered_map<int, int> mp;
    int sum = 0;
    int res = 0;
    mp[0] = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            sum += 1;
        }
        else
        {
            sum += -1;
        }

        if (mp.find(sum) != mp.end())
        {
            res = max(res, i - mp[sum]);
        }
        else
        {
            mp[sum] = i;
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << MaxLength(arr, n);
    return 0;
}