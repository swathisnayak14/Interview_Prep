//find duplicate in an array of N+1 Integers 
//the approach is visiting and element in the array and changing the index number equal to the element to minus so that when next
//visited if the number is already negative, then it can be stated as a duplicate number

#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void findDuplicate(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int index=abs(arr[i]);
        if(arr[i]<0)
            cout<<index<<" ";
        arr[index]=-arr[index];
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    findDuplicate(arr,n);
    return 0;
}