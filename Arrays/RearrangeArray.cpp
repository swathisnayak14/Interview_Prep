//  Rearrange a given array so that Arr[i] becomes Arr[Arr[i]] with O(1) extra space.

// Example:

// Input : [1, 0]
// Return : [0, 1]
// Let's say N = size of the array. Then, the following holds true :

// All elements in the array are in the range [0, N-1]
// N * N does not overflow for a signed integer

#include <bits/stdc++.h>
using namespace std;

void rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    // 4  0 2  1 3 ->input
    //19 20 12 1 8   ->current array
    // 3 4 2 0 1 ->output

    for (int i = 0; i < n; i++)
    {
        int x = nums[i];           // x=4
        int y = nums[x];           // y=3
        nums[i] = x + (y % n) * n; // 4+(3%5)*5->19
    }

    for(int i=0;i<n;i++)
    {
        nums[i]/=n;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    vector<int> nums{1, 0};
    rearrangeArray(nums);
    
    return 0;
}