// Find the Union and Intersection of the two sorted arrays.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the size of m and n" << endl;
    cin >> m >> n;
    int a[m], b[n];
    unordered_map<int, int> counter;
    cout << "Enter the array 1" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        counter[a[i]]++;
    }
    cout << "Enter the array 2" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        counter[b[i]]++;
    }
    cout << counter.size() << " ";
    cout << endl;
    return 0;
}