// Given an array of intervals intervals where intervals[i] = [starti, endi], return the minimum number of intervals you need to remove
// to make the rest of the intervals non-overlapping.

// Example 1:

// Input: intervals = [[1,2],[2,3],[3,4],[1,3]]
// Output: 1
// Explanation: [1,3] can be removed and the rest of the intervals are non-overlapping.
// Example 2:

// Input: intervals = [[1,2],[1,2],[1,2]]
// Output: 2
// Explanation: You need to remove two [1,2] to make the rest of the intervals non-overlapping.
// Example 3:

// Input: intervals = [[1,2],[2,3]]
// Output: 0
// Explanation: You don't need to remove any of the intervals since they're already non-overlapping.

#include <bits/stdc++.h>
using namespace std;
int eraseOverlapIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    int previous = 0;
    int n = intervals.size();

    int ans = 0;
    for (int current = 1; current < n; current++)
    {
        //[1,5] [3,6] //overlapping
        // prev  curr

        //[1,5] [8,10] //non overlapping
        //[1,5] [2,3]
        // overlapping
        if (intervals[current][0] < intervals[previous][1])
        {
            ans++;
            if (intervals[current][1] <= intervals[previous][1])
            {
                previous = current;
            }
        }

        //[1,5] [8,11] not overlapping
        else
        {
            previous = current;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> intervals{{1, 2}, {2, 3}, {3, 4}, {1, 3}};
    cout <<eraseOverlapIntervals(intervals);
}