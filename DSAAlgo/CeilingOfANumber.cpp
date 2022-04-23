// arr=[2,3,5,9,14,16,18]
// Input: 14
// Ouput: 4

// arr=[2,3,5,9,14,16,18]
// Input: 15
// Ouput: 5
//implement binary search
#include<bits/stdc++.h>
using namespace std;

int ceiling(int arr[],int n,int target)
{
    if(target>arr[n-1])
    {
        return -1;
    }

    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;

        if(target<arr[mid])
        {
            end=mid-1;
        }
        else if(target>arr[mid])
        {
            start=mid+1;
        }
        else
            return mid;
    }
    return start;
}
int main()
{
    int arr[]={2,3,5,9,14,16,18};
    int target;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the target:"<<endl;
    cin>>target;
    cout<<"Answer is : "<<ceiling(arr,n,target);
    return 0;
}