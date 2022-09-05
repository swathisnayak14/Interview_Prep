// A target and and array nums is given
// A target index is an index i such that nums[i]==target

// Return a list of target indices of nums after sorting nums in non-decreasing order. If there are no target indices , return an empty list.
// The returned list must be in a sorted order.

// Input:nums=[3,2,4,3,1,5,4,3]
// Output:[5,6]

#include <bits/stdc++.h>
using namespace std;

vector<int> targetPosition(vector<int> &nums, int target)
{
    vector<int> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            res.push_back(i);
        }
    }
    return res;
}
int main()
{
    vector<int> nums{3, 2, 4, 3, 1, 5, 4, 3};
    int target = 3;
    vector<int> ans = targetPosition(nums, target);

    for (auto i = ans.begin(); i != ans.end(); i++)
        cout << *i << " ";
    return 0;
}