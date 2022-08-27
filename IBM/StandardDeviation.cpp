#include <bits/stdc++.h>
using namespace std;

float standardDev(float arr[], int n)
{
    float sum = 0.0, mean, sd = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    mean = sum / n;

    for (int i = 0; i < n; i++)
    {
        sd += pow(arr[i] - mean, 2);
    }
    return sqrt(sd / 10);
}

int main()
{
    int n;
    cin >> n;
    float arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << standardDev(arr, n);
    return 0;
}