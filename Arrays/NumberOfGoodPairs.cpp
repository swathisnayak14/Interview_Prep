// Input:nums[1,2,3,1,1,3]
// Output:4

// Given an array of integers nums
//  A pair (i,j) is called good if nums[i]==nums[j] and i<j.

// Return the number of good pairs

#include <bits/stdc++.h>
using namespace std;

int numberOfPairs(vector<int> &nums)
{
    int noOfPairs = 0;

    map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    for (auto ele : mp)
    {
        noOfPairs += (ele.second) * (ele.second-1) / 2;
    }

    return noOfPairs;
}
int main()
{
    vector<int> nums{1, 2, 3, 1, 1, 3};
    cout << numberOfPairs(nums);
    return 0;
}