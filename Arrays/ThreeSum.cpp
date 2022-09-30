// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and
//  nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation:
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
// Example 2:

// Input: nums = [0,1,1]
// Output: []
// Explanation: The only possible triplet does not sum up to 0.
// Example 3:

// Input: nums = [0,0,0]
// Output: [[0,0,0]]
// Explanation: The only possible triplet sums up to 0.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    vector<vector<int>> res;
    for (int i = 0; i < nums.size() - 2; i++) // here -2 because the last two elements can be given for b and c.
    {
        if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
        {
            int low = i + 1, high = nums.size() - 1, sum = 0 - nums[i];
            while (low < high)
            {
                if (nums[low] + nums[high] == sum)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[low]);
                    temp.push_back(nums[high]);
                    res.push_back(temp);

                    while (low < high && nums[low] == nums[low + 1])
                    {
                        low++;
                    }

                    while (low < high && nums[high] == nums[high - 1])
                    {
                        high--;
                    }

                    low++;
                    high--; // moving the pointer to the next elements to check when the above while loop is finished
                }

                else if (nums[low] + nums[high] < sum)
                {
                    low++;
                    high--;
                }
            }
        }
    }
    return res;
}

int main()
{
    vector<int>nums{-1,0,1,2,-1,-4};
    vector<vector<int>>ans=cout<<threeSum(nums);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}