//Find the maximum and minimum element in an array 

#include<bits/stdc++.h>
using namespace std;

void maxmin(int arr[],int n)
{
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
        if(min>arr[i])
            min=arr[i];
    }
    cout<<"Max element is : "<<max<<endl;
    cout<<"Min element is : "<<min;
}
int main()
{
    int arr[]={23,9,789,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxmin(arr,n);
    return 0;
}