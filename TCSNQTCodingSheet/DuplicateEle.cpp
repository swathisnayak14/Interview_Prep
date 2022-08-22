// find duplicate in an array of N+1 Integers
// the approach is visiting and element in the array and changing the index number equal to the element to minus so that when next
// visited if the number is already negative, then it can be stated as a duplicate number

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void findDuplicate(int arr[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
}
int main()
{
    int arr[] = {1, 2, 3, 1, 5, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    findDuplicate(arr, n);
    return 0;
}
