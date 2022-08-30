#include<bits/stdc++.h>
using namespace std;

int findSumOfIndices(int arr[],int n,int target)
{
    int sum=0;
    if(n>0)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if((arr[i]+arr[j])==target)
                {
                 sum=i+j;   
                }
            }
        }
    }
    return sum;
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
    int target=136;
    cout<<findSumOfIndices(arr,n,target);
    return 0;
}