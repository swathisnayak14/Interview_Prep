// Given a natural number, calculate sum of all its proper divisors. A proper divisor of a natural number is the divisor that is strictly less than the number.
// For example, number 20 has 5 proper divisors: 1, 2, 4, 5, 10, and the divisor summation is: 1 + 2 + 4 + 5 + 10 = 22.
// Examples :

// Input : num = 10
// Output: 8
// // proper divisors 1 + 2 + 5 = 8

// Input : num = 36
// Output: 55
// // proper divisors 1 + 2 + 3 + 4 + 6 + 9 + 12 + 18 = 55

#include <bits/stdc++.h>
using namespace std;

int divSum(int num)
{
    int result = 0;
    if (num == 1)
        return result;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            if (i == (num / i))
                result += i;
            else
                result += (i + num / i);
        }
    }
    return result + 1;
}

int main()
{
    int num;
    cin >> num;
    cout << divSum(num);
    return 0;
}