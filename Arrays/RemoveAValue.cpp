// Remove all 2 in-place
// Input: nums=[0,1,2,2,3,0,4,2],val=2
// Output: 5 //0,1,3,0,4

#include <bits/stdc++.h>
using namespace std;

int removeAVal(vector<int> &nums, int val)
{
    int i = 0;
    for (auto data : nums)
    {
        if (data != val)
        {
            nums[i] = data;
            cout << nums[i] << " ";
            i++;
        }
    }
    return i;

    //    vector<int>::iterator it=nums.begin();
    //    while(it!=nums.end())
    //    {
    //        if(*it==val)
    //             it=nums.erase(it);
    //         else
    //             it++;
    //    }
    //     int len=nums.size();
    //     return len;
}

int main()
{
    vector<int> nums{0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    cout << endl
         << removeAVal(nums, val);
    return 0;
}
