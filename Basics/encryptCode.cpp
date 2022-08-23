// Input: take input for S,N,M.
// Formula to encrypt is (((S^N%10)^M)%1000000007)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int S, N, M, ans;
    scanf("%ld %ld %ld", &S, &N, &M);
    ans = pow(S, N);
    ans = ans % 10;
    ans = pow(ans, M);
    ans = ans % 1000000007;
    cout << ans;
    return 0;
}