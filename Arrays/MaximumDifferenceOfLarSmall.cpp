//Maximum difference between two elements such that larger element appears after the smaller number
// Input : arr = {2, 3, 10, 6, 4, 8, 1}
// Output : 8
// Explanation : The maximum difference is between 10 and 2.

// Input : arr = {7, 9, 5, 6, 3, 2}
// Output : 2
// Explanation : The maximum difference is between 9 and 7.
//1, 2, 90, 10, 110
#include<bits/stdc++.h>
using namespace std;

void MaxDiff(int arr[],int n)
{
    int maxDiff=arr[1]-arr[0];//1
    int minDiff=arr[0];//1
    for(int i=1;i<n;i++)
    {
        if(arr[i]-minDiff>maxDiff)//10-1=9>89
        {
            maxDiff=arr[i]-minDiff;//89
        }
        if(arr[i]<minDiff)//
        {
            minDiff=arr[i];
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    MaxDiff(arr,n);
    return 0;
}