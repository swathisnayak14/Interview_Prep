// Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is
// greater than or equal to all the elements to its right side. The rightmost element is always a leader.

// Example 1:

// Input:
// n = 6
// A[] = {16,17,4,3,5,2}
// Output: 17 5 2
// Explanation: The first leader is 17
// as it is greater than all the elements
// to its right.  Similarly, the next
// leader is 5. The right most element
// is always a leader so it is also
// included.

// Example 2:

// Input:
// n = 5
// A[] = {1,2,3,4,0}
// Output: 4 0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> S;
    int A[] = {16, 17, 4, 3, 5, 2};
    // int A[] = {1, 2, 3, 4, 0};
    int n = sizeof(A) / sizeof(A[0]);

    for (int i = n - 1; i > 0; i--)
    {
        if (A[i] > A[i - 1] && A[i] > A[i + 1])
        {
            S.push(A[i]);
        }
    }
    while (!S.empty())
    {
        cout << S.top() << " ";
        S.pop();
    }
    cout << A[n - 1];
    return 0;
}