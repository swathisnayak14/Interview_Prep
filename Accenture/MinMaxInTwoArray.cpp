// Input:a1=[9,16,12,5,15]
//       a2=[14,7,22,5,32,77]
//       k=9

// Output:3

// Explaination

// in a1 3 numbers are greater than 9 ie:16,12,15, so a1=3
// in  a2 2 numbers are lesser than 9 ie:7 and 5, so a2=2
// now the maximum of 3 and 2 returned

#include <bits/stdc++.h>
using namespace std;

int minMax(int a1[], int a2[], int k, int n1, int n2)
{
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n1; i++)
    {
        if (a1[i] > k)
        {
            count1 += 1;
        }
    }

    for (int i = 0; i < n1; i++)
    {
        if (a1[i] < k)
        {
            count2 += 1;
        }
    }
    int res = max(count1, count2);
    return res;
}

int main()
{
    int a1[5] = {9, 16, 12, 5, 15};
    int a2[6] = {14, 7, 22, 5, 32, 77};
    int k = 9;
    cout << minMax(a1, a2, k, 5, 6);
    return 0;
}