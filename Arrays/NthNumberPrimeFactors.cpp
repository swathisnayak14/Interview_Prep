// Find nth number whose prime factors are: {1,2,3,5}
// Explaination
// 1->1
// 2->2
// 3->3
// 4->2
// 5->5
// 6->2,3
// 7->7 but this is not present in the set, so the number 7 is ignored
// 8->2
// 9->3
// 10->2,5
// 11->11 ignored as not present

#include <bits/stdc++.h>
using namespace std;

int primeFactors(int n)
{
    int arr[n];

    for (int i = 1, j = 0; i < 1000; i++)
    {
        int num = i;
        while (num % 2 == 0)
        {
            num /= 2;
        }

        while (num % 3 == 0)
        {
            num /= 3;
        }

        while (num % 5 == 0)
        {
            num /= 5;
        }

        if (num == 1)
        {
            arr[j++] = i;
        }

        if (arr[n - 1] == i)
            break;
    }

    return arr[n - 1];
}
int main()
{
    int n = 9;
    cout << primeFactors(n);
    return 0;
}