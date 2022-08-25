// refer technical session 2 of cm

// We describe thr problem in simpler terms as create a new sequence such thst first X elements are strictly increasing and the remaining are strictly
// decreasing use the elemenst from A[] only once.

// Example:
// INPUT: A[]=[1,9,8,3,4,5]
// OUTPUT: true

// INPUT: A[]=[1,3,3,2,2]
// OUTPUT: false

#include <bits/stdc++.h>
using namespace std;

int IncreaseDecrease(int arr[], int n)
{
    int maximum = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
        maximum = max(arr[i], maximum);
    }

    for (auto it : mp)
    {
        if (it.first == maximum && it.second > 1)
        {
            cout << "false";
            return 0;
        }
        else if (it.second > 2)
        {
            cout << "false";
            return 0;
        }
    }
    cout << "true";
}
int main()
{
    int arr[] = {1, 3, 3, 5, 2, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    IncreaseDecrease(arr, n);
    return 0;
}
