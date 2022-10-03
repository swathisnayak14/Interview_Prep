// Given an array of positive integers of size n. Find the maximum sum of triplet( ai + aj + ak ) such that 0 <= i < j < k < n and
// ai < aj < ak.

// Input: a[] = 2 5 3 1 4 9
// Output: 16

// Explanation:
// All possible triplets are:-
// 2 3 4 => sum = 9
// 2 5 9 => sum = 16
// 2 3 9 => sum = 14
// 3 4 9 => sum = 16
// 1 4 9 => sum = 14
// Maximum sum = 16

#include <bits/stdc++.h>
using namespace std;

int maxSumTriplet(int arr[], int n)
{
    // right suffix array
    vector<int> right(n);
    // finding best on right side
    for (int i = n - 1; i >= 0; i--)
    {
        if (n == 1) // if rightmost element is the greatest element
        {
            right[i] = arr[i];
        }
        else
        {
            // arr= 1 3 5 2
            // right= 5 5 5 2
            right[i] = max(right[i + 1], arr[i]);
        }
    }

    // finding best on right side
    set<int> s;
    s.insert(arr[0]);
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        // 2 5 3 1 4 9
        //{2,5}
        // finding an element left of the cuurent say 5 is the cuurent. left of it is 2
        auto it = s.find(arr[i]);
        // now if we have like (1,2,5) there is no element left to compare smaller than 1
        if (it != s.begin() && right[i] != arr[i])
            ans = max(ans, (*--it) + arr[i] + right[i]); // here *--it refers to 2 arr[i] refers to 5 and right[i] refers to 9 from the suffix arrat
    }
    return ans;
}

int main()
{
    int arr[] = {2, 5, 3, 1, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxSumTriplet(arr, n);
    return 0;
}