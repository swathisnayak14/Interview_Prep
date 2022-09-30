// Example 1:

// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    set<int> s(nums.begin(), nums.end());
    nums.clear();

    int size = s.size();
    for (auto it : s)
    {
        nums.push_back(it);
    }
    return size;
}

int main()
{
    vector<int> nums{1, 1, 2};
    cout << removeDuplicates(nums);
    return 0;
}