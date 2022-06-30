// Given an array of n elements, if any element occurs at least half
// number of times equal to the element, print it. Else, don’t print.
// Sample Input: 1,2,3,3,4,5,6,7,8,8,8,8
// Sample Output: 1,2,3,8

#include <bits/stdc++.h>
using namespace std;
void findUniqueSum(vector<int> &nums)
{
    map<int, int> m;
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        m[nums[i]]++;
    }
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second >= ceil((it->first) / 2.0))
            cout << it->first << " ";
    }
}

int main()
{
    int arr[12] = {1, 2, 3, 3, 4, 5, 6, 7, 8, 8, 8, 8};
    vector<int> nums;
    for (int i : arr)
        nums.push_back(i); // each element of arr is copied to vector nums
    findUniqueSum(nums);
    return 0;
}