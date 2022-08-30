// Input: arr[] = {1, 2, 2, 2, 3}
// Output: {1, 2, 2, 3}
// Explanation:
// Remove 2 once, as it occurs more than 2 times.

// Input: arr[] = {3, 3, 3}
// Output: {3, 3}
// Explanation:
// Remove 3 once, as it occurs more than 2 times.

#include <bits/stdc++.h>
using namespace std;

void removeDuplicatesTwice(vector<int> &nums)
{
    int i = 0;
    for (auto data : nums)
    {
        if (i == 0 || i == 1 || data != nums[i - 2])
        {
            nums[i] = data;
            i++;
        }
    }
    cout << i<<endl;//count of elements returned
    int n = i;
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i];

        if (i != n - 1)
        {
            cout << ",";
        }
    }
    cout << "}";
}

int main()
{
    vector<int> nums = {1, 2, 2, 2, 3};
    removeDuplicatesTwice(nums);
    return 0;
}
