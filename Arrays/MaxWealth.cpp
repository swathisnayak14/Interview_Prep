// Input:accounts=[[1,5],[7,3],[3,5]]
// Output:10

#include <bits/stdc++.h>
using namespace std;

int maxWealth(vector<vector<int>> &accounts)
{
    int res = 0;
    for (int i = 0; i < accounts.size(); i++)
    {
        int temp = 0;

        for (int j = 0; j < accounts[i].size(); j++)
        {
            temp = temp + accounts[i][j];
        }
        res = max(temp, res);
    }

    return res;
}
int main()
{
    vector<vector<int>> accounts{{1, 5}, {7, 3}, {3, 5}};
    cout << maxWealth(accounts);
    return 0;
}