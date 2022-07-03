//If the array is sorted then it is easy to find the kth smallest or largest element. 
//Fetching arr[k-1] will give us the kth smallest and fetching arr[n-k] will give us the kth largest element, 
//as we just need to find kth element from start and end.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k=1,n=10;
    vector<int> arr={5,9,1,4,6,7,8,2,0,4,-5,-3};//{-5,-3,0,1,2,4,4,5,6,7,8,9}
    sort(arr.begin(),arr.end());
    cout<<"Kth smallest element is : "<<arr[k-1]<<endl;
    cout<<"Kth largest element is : "<<arr[n-k]<<endl;
    return 0;
}