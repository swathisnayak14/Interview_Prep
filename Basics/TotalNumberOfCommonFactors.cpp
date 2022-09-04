// Input: a=12 b=24
//  Output:6

// Explaination: Factors of 12->1,2,3,4,6,12
//               Factors of 24->1,2,3,4,6,12,24

//               1,2,3,4,6,12 are common, so its 6

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int commonFactors(ll a, ll b)
{
    ll n = __gcd(a, b);
    ll count = 0;
    for (ll i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                count++;
            else
                count += 2;
        }
    }
    return count;
}
int main()
{
    ll a, b;
    cin >> a >> b;
    cout << commonFactors(a, b);
    return 0;
}