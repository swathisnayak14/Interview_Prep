// Input:nums=[3,1,2,10,1]
// Output:[3,4,6,16,17]

#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        nums[i] = nums[i] + nums[i - 1];
    }
    return nums;
}
int main()
{
    vector<int> nums{3, 1, 2, 10, 1};
    vector<int> ans = runningSum(nums);

    for (auto i = ans.begin(); i != ans.end(); i++)
        cout << *i<<" ";
    return 0;
}