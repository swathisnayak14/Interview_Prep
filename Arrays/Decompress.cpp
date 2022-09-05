// Input:nums=[1,2,3,4]
// Output:[2,4,4,4]

// Explaination
// 1 occurs 1 times, so the number next to 1 should appear one time. Next increment by 2 and reach 3. So now 4 should be repeated 4 times.

#include <bits/stdc++.h>
using namespace std;

vector<int> decompress(vector<int> &nums)
{
    vector<int> res;

    for (int i = 0; i < nums.size(); i += 2)
    {
        res.insert(res.end(), nums[i], nums[i + 1]); // nums[i] will have example 1 so now print nums[i+1] ie:next element 1 time.
    }
    return res;
}

int main()
{
    vector<int> nums{1, 2, 3, 4};
    vector<int> ans = decompress(nums);

    for (auto i = ans.begin(); i != ans.end(); i++)
        cout << *i << " ";
    return 0;
}