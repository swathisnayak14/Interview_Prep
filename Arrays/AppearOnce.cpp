#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, min, max, ans = 0;
    // cin >> n >> min >> max;
    int num[]={1,2,2,4,5};
    n=sizeof(num)/sizeof(num[0]);
    for (int i = 0; i < n; i++)
    {
        ans ^= num[i];
    }
    cout << ans;
    return 0;
}