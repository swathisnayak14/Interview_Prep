// Given a characters array letters that is sorted in non-decreasing order and a character target, return the smallest 
//character in the array that is larger than target.

// Note that the letters wrap around.

// For example, if target == 'z' and letters == ['a', 'b'], the answer is 'a'.
 

// Example 1:

// Input: letters = ["c","f","j"], target = "a"
// Output: "c"
// Example 2:

// Input: letters = ["c","f","j"], target = "c"
// Output: "f"
// Example 3:

// Input: letters = ["c","f","j"], target = "d"
// Output: "f"

//same as ceiling with a little change

//implement binary search
#include<bits/stdc++.h>
using namespace std;

char smallestLetter(char arr[],int n,int target)
{
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
    }
    return (arr[start%n]);
}
int main()
{
    char arr[]={'c','f','j'};
    int target;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the target:"<<endl;
    cin>>target;
    cout<<"Answer is : "<<smallestLetter(arr,n,target);
    return 0;
}