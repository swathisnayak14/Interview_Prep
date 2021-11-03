// Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.The result is going to be very large, hence return the result in the form of a string.

// Example 1:

// Input:
// N = 5
// Arr[] = {3, 30, 34, 5, 9}
// Output: 9534330
// Explanation: Given numbers are {3, 30, 34,
// 5, 9}, the arrangement 9534330 gives the
// largest value.
// Example 2:

// Input:
// N = 4
// Arr[] = {54, 546, 548, 60}
// Output: 6054854654
// Explanation: Given numbers are {54, 546,
// 548, 60}, the arrangement 6054854654
// gives the largest value.

#include <bits/stdc++.h>
using namespace std;

static bool comparator(string s1, string s2)
{
    string first = s1 + s2;
    string second = s2 + s1;
    for (int i = 0; i < first.size(); i++)
    {
        if (first[i] > second[i])
            return true;
        else if (first[i] < second[i])
            return false;
    }
    return false;
}

string largest(vector<string> &a, int n)
{
    n = a.size();
    string res = "";
    sort(a.begin(), a.end(), comparator);
    for (int i = 0; i < n; i++)
        res.append(a[i]);
    return res;
}
int main()
{
    int n, i;
    cin >> n;
    int a[n];
    vector<string> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << largest(arr, n);
    return 0;
}