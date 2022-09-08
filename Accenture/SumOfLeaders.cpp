// Input:a[]={52,66,64,36,45,24,32}
// Output:207

// Explaination:
// 32+45+64+66=207

#include <bits/stdc++.h>
using namespace std;
int sumOfLeaders(int a[], int n)
{
    if (n == 0)
        return -1;

    int sum = a[n - 1];
    int max = a[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > max)
        {
            sum += a[i];
            max = a[i];
        }
    }
    return sum;
}
int main()
{
    int a[] = {52, 66, 64, 36, 45, 24, 32};
    int n = sizeof(a) / sizeof(a[0]);
    cout << sumOfLeaders(a, n);
    return 0;
}