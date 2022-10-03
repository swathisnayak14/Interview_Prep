// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the
// non-overlapping intervals that cover all the intervals in the input.

// Example 1:

// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
// Example 2:

// Input: intervals = [[1,4],[4,5]]
// Output: [[1,5]]
// Explanation: Intervals [1,4] and [4,5] are considered overlapping.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    int n = intervals.size();

    for (int i = 0; i < n; i++)
    {
        if (ans.empty()) // when there is nothing to compare we just push the answer into vector
        {
            ans.push_back(intervals[i]);
        }

        // if we have something to compare then
        else
        {
            vector<int> &v = ans.back(); // gives the last answer in ans inorder to compare
            int y = v[1];                // ending time of previous interval y with current interval, i's start time
            //[1,4] [2,5]=[1,5] comparing 4 and 5.
            // overlapping
            if (intervals[i][0] <= y)
            {
                v[1] = max(y, intervals[i][1]);
            }
            else
            {
                // non-overlapping
                ans.push_back(intervals[i]);
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> intervals{{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> answer = merge(intervals);
    for(int i=0;i<answer.size();i++)
    {
        for(int j=0;j<answer[i].size();i++)
        {
            cout<<"["<<answer[i][j]<<","<<"]";
        }
        cout<<endl;
    }
    return 0;
}