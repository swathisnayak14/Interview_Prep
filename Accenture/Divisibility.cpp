// Input: 8 2 -4
// Output: true

// Explaination

// Take n=8 and num1=2 and num2=-4. Check if n divides num1 and num2 both perfectly. If yes then return true else return false.

#include <bits/stdc++.h>
using namespace std;

bool divisibility(int n, int num1, int num2)
{
    if (n % num1 == 0 and n % num2 == 0)
        return true;
    return false;
}

int main()
{
    int n, num1, num2;
    n = 8, num1 = 3, num2 = -4;

    if (divisibility(n, num1, num2))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}