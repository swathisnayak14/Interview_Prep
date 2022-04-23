// take an int n, with a set of numbers acc to n. if the sum of two numbers in the set
// is n.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        int j;
        for (j = i + 1; j < n; j++)
        {
            if ((a[i] + a[j]) == n){
                cout << "YES";
                exit(0);
            }
        }
    }
    cout<<"NO";
    return 0;
}