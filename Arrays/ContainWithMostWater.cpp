// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are
// (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section)
// the container can contain is 49.

#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int start = 0;
    int end = height.size() - 1;
    int maxArea = 0;
    int area;
    while (start < end)
    {
        area = min(height[start], height[end]) * (end - start);
        if (area > maxArea)
        {
            maxArea = area;
        }

        if (min(height[start], height[end]) == height[start])
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return maxArea;
}

int main()
{
    vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height);
    return 0;
}