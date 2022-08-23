#include <bits/stdc++.h>
using namespace std;

int maxOfANumber(int number)
{
    int max = 0;
    while (number != 0)
    {
        int rem = number % 10;
        if (rem > max)
        {
            max = rem;
        }
        number /= 10;
    }
    return max;
}

int main()
{
    int number = 891;
    cout << maxOfANumber(number);
    return 0;
}