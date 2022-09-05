// Input:nums=[2,5,1,3,4,7] n=3
// Output:[2,3,5,4,1,7]

// Explaination: Divide the array in  n times and print accordingly

#include <bits/stdc++.h>
using namespace std;

vector<int> shuffelArray(vector<int> &nums, int n)
{
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        res.push_back(nums[i]);
        res.push_back(nums[n + i]);
    }
    return res;
}
int main()
{
    vector<int> nums{2, 5, 1, 3, 4, 7};
    int n = 3;
    vector<int> ans = shuffelArray(nums, n);

    for (auto i = ans.begin(); i != ans.end(); i++)
    {
        cout << *i << " ";
    }
    return 0;
}
