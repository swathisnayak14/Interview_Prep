// Input:nums=[0,0,1,1,1,2,2,3,3,4]
// Output:nums=[0,1,2,3,4]

#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int>& nums)
{
    map<int, int> mp;
    if(nums.size()==0)
    {
        cout<<"0";
        exit(0);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " ";
    }
}
int main()
{
    vector<int>nums{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    removeDuplicates(nums);
    return 0;
}