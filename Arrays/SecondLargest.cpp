//find the second largest element in an array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, firstLar = INT_MIN, secondLar = INT_MIN;
    ;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];//1 2 3 4 5
        if (a[i] > firstLar) 
            firstLar = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != firstLar && a[i] > secondLar)
            secondLar = a[i];
    }
    cout << secondLar;

    return 0;
}