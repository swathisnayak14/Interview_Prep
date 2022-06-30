// Given an array of n elements, find the kth largest element
// Input:
// 10
// 1 7 8 7 8 7 2 3 5 6 9
// 4
// Output:
// 6

#include <bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int> &v, int k)
{
    set<int> s;
    int size = v.size();
    for (int i = 0; i < size; i++)
        s.insert(v[i]);
    set<int>::iterator it = s.begin();
    k = s.size() - k;
    while (k--)
        it++;
    return *it;
}

int main()
{
    int arr[10] = {1, 7, 8, 7, 8, 2, 6, 5, 9, 3};
    vector<int> v;
    int k; // to find the kth largest ele
    cin >> k;
    for (int i = 0; i < 10; i++)
        v.push_back(arr[i]);
    cout << findKthLargest(v, k);
    return 0;
}
