// Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.

// Example 1:

// Input: nums = [0,1]
// Output: 2
// Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.
// Example 2:

// Input: nums = [0,1,0]
// Output: 2
// Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.

#include <bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int> &nums)
{
    //+1 ->1
    //-1 ->0
    int sum = 0;
    int ans = 0;
    unordered_map<int, int> m;
    m.insert({0, -1});
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i] == 1 ? 1 : -1;
        auto it = m.find(sum);
        if (it != m.end())
        {
            ans = max(ans, i - it->second);
        }
        else
        {
            m.insert({sum, i});
        }
    }
    return ans;
}

int main()
{
    vector<int> nums{0, 1};
    cout <<findMaxLength(nums);
    return 0;
    
}