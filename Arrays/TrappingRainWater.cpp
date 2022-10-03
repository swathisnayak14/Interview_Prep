// Given n non - negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap 
// after raining.

// Input : height = [ 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 ] 
// Output : 6 
// Explanation : The above elevation map(black section) is represented by array[0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1].
// In this case, 6 units of rain water(blue section) are being trapped.

// Input : height = [ 4, 2, 0, 3, 2, 5 ] 
// Output : 9

#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();
    int left = 0;
    int right = n - 1;
    int leftbar = height[0];
    int rightbar = height[n - 1];
    int ans = 0;
    while (left <= right)
    {
        // which bar is limiting bar?
        // left or right?

        // if ele that you are seeing now if that becomes the highest left,it will not store water and will spill
        // leftbar is the limiting condition
        if (leftbar < rightbar)
        {
            if (height[left] > leftbar)
            {
                leftbar = height[left];
            }
            else
            {
                // it will store water
                ans += leftbar - height[left];
                left++;
            }
        }

        else
        {
            // righbar is the limiting condition
            if (height[right] > rightbar)
            {
                rightbar = height[right];
            }
            else
            {
                ans += rightbar - height[right];
                right--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> height{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trap(height);
    return 0;
}