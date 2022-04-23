// price-
// input-5244 output-160

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, modi = 1;
    cin >> N;
    while (N != 0)
    {
        modi = modi * (N % 10);
        N /= 10;
    }
    cout << modi << endl;
    return 0;
}