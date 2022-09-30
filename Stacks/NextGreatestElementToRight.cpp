// Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for
//  every element in nums.

// The next greater number of a number x is the first greater number to its traversing-order next in the array, which means you could search
//  circularly to find its next greater number. If it doesn't exist, return -1 for this number.

// Example 1:

// Input: nums = [1,2,1]
// Output: [2,-1,2]
// Explanation: The first 1's next greater number is 2;
// The number 2 can't find next greater number.
// The second 1's next greater number needs to search circularly, which is also 2.
// Example 2:

// Input: nums = [1,2,3,4,3]
// Output: [2,3,4,-1,4]

#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(vector<int> &nums)
{
    stack<int> s;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        s.push(nums[i]);
    }
    vector<int> ans;

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (s.top() > nums[i])
            ans.push_back(s.top());
        else
        {
            while (!s.empty() && s.top() <= nums[i])
            {
                s.pop();
            }
            if (!s.empty() && s.top() > nums[i])
                ans.push_back(s.top());
            else
                ans.push_back(-1);
        }
        s.push(nums[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> nums{1,2,3,4,3};
    vector<int> ans = nextGreaterElements(nums);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}