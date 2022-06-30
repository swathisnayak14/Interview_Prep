// Find the sum of unique elements of an array (Unique here means that
// elements appear only once within the array)
// Sample Input: 1,2,3,4,5,6,6,5,4,4
// Sample Output: 6

#include <bits/stdc++.h>
using namespace std;
int findUniqueSum(vector<int> &nums)
{
    map<int, int> m;
    int sum = 0;
    int size = nums.size();
    for (int i = 0; i < size; i++)
        m[nums[i]]++;
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second == 1)
            sum += it->first;
    }
    return sum;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 4, 5, 5, 6, 6, 4};
    vector<int> nums;
    for (int i : arr)
        nums.push_back(i); // each element of arr is copied to vector nums
    cout << findUniqueSum(nums);
    return 0;
}