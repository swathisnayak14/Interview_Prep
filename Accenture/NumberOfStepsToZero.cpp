// Input:5
// Output:4

// Explaination:

// if the input say n is odd then do n-1.If n is even do n/2. Do this until n becomes 0. Calculate the number of steps required to reach 0.

#include <bits/stdc++.h>
using namespace std;
int noOfSteps(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }

        else
        {
            n = n - 1;
        }
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << noOfSteps(n);
    return 0;
}