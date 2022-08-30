#include <bits/stdc++.h>
using namespace std;

void divisiblePrime(int a, int b, int n)
{
    int flag = 0;
    if (a <= b && a > 0 && b > 0 && n > 0)
    {
        for (int i = a; i <= b; i=i+2)
        {
            flag=0;
            int x = i / 2;
            for (int j = 2; j <= x; j++)
            {
                if (i % j ==0)
                {
                 flag=1;
                 break;
                }
            }
            if(flag==0)
            {
                cout<<i<<" ";
            }
        }
    }
}
int main()
{
    int a = 10, b = 20;
    divisiblePrime(a, b, 2);
    return 0;
}