// Consider the following series: 1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187 …

// This series is a mixture of 2 series – all the odd terms in this series form a geometric series and all the even terms form yet another geometric series. Write a program to find the Nth term in the series.

// The value N in a positive integer that should be read from STDIN. The Nth term that is calculated by the program should be written to STDOUT. Other than value of n th term,no other character / string or message should be written to STDOUT. For example , if N=16, the 16th term in the series is 2187, so only value 2187 should be printed to STDOUT.

// You can assume that N will not exceed 30.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << 1;
        exit(0);
    }
    int a[n];
    a[0] = a[1] = 1;
    if (n <= 30)
    {
        for (i = 2; i < n; i++)
        {
            if (i % 2 == 0)
                a[i] = a[i - 2] * 2;
            else
                a[i] = a[i - 2] * 3;
        }
        cout << a[n - 1];
    }
    return 0;
}