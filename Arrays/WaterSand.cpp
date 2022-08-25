// refer tech 3 from cm

#include <bits/stdc++.h>
using namespace std;

int ways(int i, int j, vector<vector<bool>> &mat)
{
    if (i == mat.size() - 1 && j == mat[0].size() - 1) // if we reach our desination
        return 1;

    if (i >= mat.size() || j >= mat[0].size() || mat[i][j] == 1) // out of bound
        return 0;

    int down = ways(i + 1, j, mat);
    int right = ways(i, j + 1, mat);

    return right + down;
}
int main()
{
    int m, n, a, b; // m and n are the dimensions of the matrix and a and b are the dimensions of the sand inside the matrix
    cin >> m >> n >> a >> b;
    m++;
    n++;
    vector<vector<bool>> mat(n, vector<bool>(m, false)); // m*n matrix pullinf all false ie:0 and putting 1 only where sand is there so that
    // it can be easily recognisable

    for (int i = 0; i < a; i++)
    {
        for (int j = m - 1; j > m - 1 - b; j--) // m-1-b because as in the question the sand is at the topmost right of the matrix
        {
            mat[i][j] = 1;
        }
    }
    cout << ways(0, 0, mat);
    return 0;
}