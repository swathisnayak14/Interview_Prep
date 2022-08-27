#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m , n ;
    cin>>m>>n;
     while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else
        {
            n = m - n;
        }
    }
    cout << m;
    return 0;
}