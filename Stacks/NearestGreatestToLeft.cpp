// Given an array of integers, find the closest(not considering distance, but value) greater on left of every element.If an element has
// no greater on the left side, print - 1

// Input:{9,4,15,6,2,10}
// Output:{-1,9,-1,15,6,15}

#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(vector<int> &nums)
{
    vector<int> v;
    stack<int> s;
    int n = nums.size() - 1;
    for (int i = n; i >=0; i++)
    {
        s.push(nums[i]);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (s.top()> nums[i])
        {
            v.push_back(s.top());
        }

        else
        {
            while (!s.empty() && s.top() <= nums[i])
            {
                s.pop();
            }
            if (!s.empty() && s.top() > nums[i])
            {
                v.push_back(s.top());
            }
            else
            {
                v.push_back(-1);//if the stack is empty
            }
        }
        s.push(nums[i]);
    }
    return v;
}
int main()
{
    vector<int> nums{9, 4, 15, 6, 2, 10};
    vector<int> ans = nextGreaterElements(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}