// Input: n=20
// Output:7

// Explaination:

// factors of 20 are 1,2,4,5,10. In this prime factors of 20 are 2 and 5. So these two are added and answer obtained is 7.

#include <bits/stdc++.h>
using namespace std;
int primeFactors(int n)
{
    int i = 2;
    int sum = 0;
    int curr_factor = -1;
    while (n > 1)
    {
        if (n % i == 0)
        {
            if (i != curr_factor)
            {
                sum += i;
                curr_factor = i;
            }
            n = n / i;
        }
        else
            i++;
    }
    return sum;
}

int main()
{
    int n = 20;
    cout << primeFactors(n);
    return 0;
}