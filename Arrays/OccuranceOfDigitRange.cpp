// INPUT:50 TO 60
// digit:5
// OUTPUT:11 (51 52 53 54 55 56 57 58 59 60)

#include <bits/stdc++.h>
using namespace std;

int occuranceOfADigit(int lower, int upper, int digit)
{
    int count = 0;
    for (int i = lower; i < upper; i++)
    {
        int temp = i;
        while (temp > 0)
        {
            if (temp % 10 == digit)
            {
                count += 1;
            }
            temp /= 10;
        }
    }
    return count;
}

int main()
{
    int lower = 50, upper = 60, digit = 5;
    cout << occuranceOfADigit(lower, upper, digit);
    return 0;
}