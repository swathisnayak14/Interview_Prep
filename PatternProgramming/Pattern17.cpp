//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1

#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int result = 1;
    for (int c = 1; c <= n; c++)
        result *= c;
    return result;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << factorial(i) / (factorial(j) * factorial(i - j)) << " ";
        }
        cout << endl;
    }
    return 0;
}