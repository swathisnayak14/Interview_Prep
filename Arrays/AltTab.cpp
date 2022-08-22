// INPUT: arr[]={3,5,2,4,1}
// OUTPUT: 4 3 5 2 1

// QUESTION: REFER YOUTUBE https://youtu.be/FaLLcdRWzIM

#include <bits/stdc++.h>
using namespace std;

int altTab(int *a, int n, int k)//*a because we need to return the changed array so that it can be printed in the main function as if we write only
// a then the array in the main function will be printed.
{
    int index = 0;
    index = k % n; // 3%5=3
    int x = index;//3
    int value = a[index];
    while (x > 0)
    {
        int p = x;//p=3
        x--;//x=2
        a[p] = a[x];//a[3]=a[2]
    }
    a[0] = value;
}

int main()
{
    int a[] = {3, 5, 2, 4, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 3; // pressing alt + tab 3 times
    altTab(a, n, k);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}