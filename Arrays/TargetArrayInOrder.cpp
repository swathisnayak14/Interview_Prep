// Input:nums[0,1,2,3,4],index=[0,1,2,2,1]
// Output:[0,4,1,3,2]

// From left to right read nums[i] and index[i],insert at index[i] the value nums[i] in target array.

#include <bits/stdc++.h>
using namespace std;

vector<int> targetArray(vector<int> &nums, vector<int> &index)
{
    vector<int> res;
    for (int i = 0; i < index.size(); i++)
    {
        res.insert(res.begin()+index[i], nums[i]);
    }
    return res;
}

int main()
{
    vector<int> nums{0, 1, 2, 3, 4};
    vector<int> index{0, 1, 2, 2, 1};
    vector<int> ans = targetArray(nums, index);

    for (auto i = ans.begin(); i != ans.end(); i++)
        cout << *i << " ";
    return 0;
}