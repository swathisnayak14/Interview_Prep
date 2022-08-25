// refer tech 3 of cm

#include <bits/stdc++.h>
using namespace std;

int paths(int i, int j, int n)
{
    if (i < 0 || j < 0 || i >= n || j >= n)
        return 0; // out of bound
    if (i == n - 1 && j == n - 1)
        return 1; // reached the destination

    int ways = 0;
    ways += paths(i + 1, j, n); // for doing down
    ways += paths(i, j + 1, n); // going right
    return ways;
}

int main()
{
    int n; // n*n matrix
    cin >> n;
    cout << paths(0, 0, n);
    return 0;
}

//similar one under the array folder named watersand