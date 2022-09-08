// Input:a1[]={22,7,1,-5,5,-2}
//       a2={4,-1,21,12,10,-3}

// Output:-102

// Explaination: the 1st ele of a1 is multiplied with last ele of a2 and is added to the sum.

#include <bits/stdc++.h>
using namespace std;

int sumOfProducts(int a1[], int a2[], int n)
{
    int sum = 0;
    if (n == 0)
        return -1;

    for (int i = 0; i < n; i++)
    {
        sum = sum + (a1[i] * a2[n - 1 - i]);
    }
    return sum;
}
int main()
{
    int a1[] = {22, 7, 1, -5, 5, -2};
    int a2[] = {4, -1, 21, 12, 10, -3};

    int n = sizeof(a1) / sizeof(a1[0]);

    cout << sumOfProducts(a1, a2, n);
    return 0;
}