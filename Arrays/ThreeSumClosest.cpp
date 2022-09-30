// Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

// Return the sum of the three integers.

// You may assume that each input would have exactly one solution.

// Example 1:

// Input: nums = [-1,2,1,-4], target = 1
// Output: 2
// Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
// Example 2:

// Input: nums = [0,0,0], target = 1
// Output: 0
// Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).

#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int ans = 0;
    int diff = INT_MAX;
    for (int i = 0; i < nums.size(); i++)
    {
        int first = nums[i];
        int start = i + 1;
        int end = nums.size() - 1;
        while (start < end)
        {
            if (first + nums[start] + nums[end] == target)
                return target;
            else if (abs(first + nums[start] + nums[end] - target) < diff)
            {
                diff = abs(first + nums[start] + nums[end] - target);
                ans = first + nums[start] + nums[end];
            }
            if (first + nums[start] + nums[end] > target)
                end--;
            else
            {
                start++;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums{-1, 2, 1, -4};
    int target = 1;
    cout << threeSumClosest(nums,target);
    return 0;
}