// Strong Numbers are the numbers whose sum of factorial of digits is equal to the original number. Given a number, check if it is a
// Strong Number or not.
// Examples:

// Input  : n = 145
// Output : Yes
// Sum of digit factorials = 1! + 4! + 5!
//                         = 1 + 24 + 120
//                         = 145

// Input :  n = 534
// Output : No

#include <bits/stdc++.h>
using namespace std;

int factorial(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    return fact;
}
bool strongNumber(int num)
{
    int temp = num;
    int sum = 0;
    while (temp != 0)
    {
        int rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }

    if (sum == num)
        return true;
    return false;
}

int main()
{
    int n = 145;
    if (strongNumber(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}