// Input:nums=[8,1,2,2,3]
// Output:[4,0,1,1,3]

// Find out how many numebrs in the array are smaller than nums[i]. For each nums[i],you need to count the number of valid j's such that

// j!=i and nums[j]<nums[i]

#include <bits/stdc++.h>
using namespace std;

vector<int> smaller(vector<int> &nums)
{
    vector<int> res;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if ((nums[i] > nums[j]) && i != j)
                count++;
        }
        res.push_back(count);
    }
    return res;
}

int main()
{
    vector<int> nums{8, 1, 2, 2, 3};
    vector<int> ans = smaller(nums);

    for (auto i = ans.begin(); i != ans.end(); i++)
        cout << *i << " ";
    return 0;
}