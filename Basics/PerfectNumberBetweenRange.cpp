// Input: n = 15
// Output: false
// Divisors of 15 are 1, 3 and 5. Sum of
// divisors is 9 which is not equal to 15.

// Input: n = 6
// Output: true
// Divisors of 6 are 1, 2 and 3. Sum of
// divisors is 6.

#include <bits/stdc++.h>
using namespace std;

int isPerfect(int num)
{
    int sum = 1;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            if (i == (num / i))
                sum += i;
            else
            {
                sum += (i + num / i);
            }
        }
    }

    if (sum == num && num != 1)
        return true;
    return false;
}
int perfect(int low, int high)
{
    for (int i = low; i <= high; i++)
    {
        if (isPerfect(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}
int main()
{
    int low = 2, high = 10000;
    perfect(low, high);
    return 0;
}