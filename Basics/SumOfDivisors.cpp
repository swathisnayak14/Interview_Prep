// Given two numbers 220 and 284. Divisors of 220's sum should be equal to 284 and vice versa

#include <bits/stdc++.h>
using namespace std;

int divSum(int num)
{
    int sum = 0;
    if (num == 1)
        return sum;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            if (i == (num / i))
                sum += i;
            else
                sum += (i + num / i);
        }
    }
    return sum + 1; // 1 because 1 is also a divisor for the number
}
int equalToDivisors(int num1, int num2)
{
    if (divSum(num1) == num2 && divSum(num2) == num1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
int main()
{
    int num1 = 220, num2 = 284;
    equalToDivisors(num1, num2);
    return 0;
}