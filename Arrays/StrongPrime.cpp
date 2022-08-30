// Input: N = 11
// Output: Yes
// 11 is 5th prime number, the arithmetic mean of 4th and 6th prime number i.e. 7 and 13 is 10.
// 11 is greater than 10 so 11 is a strong prime.

// Input: N = 13
// Output: No
// 13 is 6th prime number, the arithmetic mean of 5th (11) and 7th (17) is (11 + 17) / 2 = 14.
// 13 is smaller than 14 so 13 is not a strong prime.

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number)
{
    if (number <= 1)
        return false;
    if (number <= 3)
        return true;
    if (number % 2 == 0 || number % 3 == 0)
        return false;

    for (int i = 5; i * i <= number; i = i + 6) // i=4 is not taken coz 4%2==0
    {
        if (number % i == 0 || number % (i + 2) == 0)
            return false;
    }
    return true;
}

static bool isStrongPrime(int num)
{
    if (!isPrime(num) || num == 2)
        return false;

    int prev = num - 1;
    int next = num + 1;

    while (!isPrime(next))
    {
        next++;
    }
    while (!isPrime(prev))
    {
        prev--;
    }

    int m = (prev + next) / 2;

    if (num > m)
        return true;
    else
        return false;
}

int main()
{
    int n = 11;
    if (isStrongPrime(n))
    {
        cout << "Yes, Strong prime";
    }
    else
    {
        cout << "No, not a strong prime";
    }

    return 0;
}