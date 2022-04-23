// input- 6(towers)
//         [1,2,2,2,3,1] -(floors in each tower)
// output- 1 (1>>2 times, 2>> 3 times ,3>>1 times)-to find number of floors that has occur even times

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        m[a]++;
    }
    for (auto i : m)
    {
        if ((i.second & 1) == 0)
        {
            cout << i.first;
            return 0;
        }
        cout << -1;
    }
}