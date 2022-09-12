// Given a 2-Dimensional character array and a string, we need to find the given string in 2-dimensional character array, such that individual
// characters can be present left to right, right to left, top to down or down to top.

// Examples:

// Input : a ={
//             {D,D,D,G,D,D},
//             {B,B,D,E,B,S},
//             {B,S,K,E,B,K},
//             {D,D,D,D,D,E},
//             {D,D,D,D,D,E},
//             {D,D,D,D,D,G}
//            }
//         str= "GEEKS"
// Output :2

#include <bits/stdc++.h>
using namespace std;

int solve(string str, int size, int i, int j, char ch[6][6], int index)
{
    int found = 0;
    if (i >= 0 and j >= 0 and i < 6 and j < 6 and str[index] == ch[i][j])
    {
        int temp = str[index];
        ch[i][j] = 0;
        index+=1;
        if (index == size)
            found = 1;

        else
        {
            found += solve(str, size, i + 1, j, ch, index);
            found += solve(str, size, i, j + 1, ch, index);
            found += solve(str, size, i - 1, j, ch, index);
            found += solve(str, size, i, j - 1, ch, index);
        }
        ch[i][j] = temp;
    }
    return found;
}

int main()
{
    string str = "GEEKS";
    char ch[6][6] = {
        {'D', 'D', 'D', 'G', 'D', 'D'},
        {'B', 'B', 'D', 'E', 'B', 'S'},
        {'B', 'S', 'K', 'E', 'B', 'K'},
        {'D', 'D', 'D', 'D', 'D', 'E'},
        {'D', 'D', 'D', 'D', 'D', 'E'},
        {'D', 'D', 'D', 'D', 'D', 'G'}};
    int ans = 0;
    int size = 5;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            ans += solve(str, size, i, j, ch, 0);
        }
    }
    cout << ans;
    return 0;
}