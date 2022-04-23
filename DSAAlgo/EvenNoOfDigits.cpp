// Given an array nums of integers, return how many of them contain an even number of digits.

 

// Example 1:

// Input: nums = [12,345,2,6,7896]
// Output: 2
// Explanation: 
// 12 contains 2 digits (even number of digits). 
// 345 contains 3 digits (odd number of digits). 
// 2 contains 1 digit (odd number of digits). 
// 6 contains 1 digit (odd number of digits). 
// 7896 contains 4 digits (even number of digits). 
// Therefore only 12 and 7896 contain an even number of digits.
// Example 2:

// Input: nums = [555,901,482,1771]
// Output: 1 
// Explanation: 
// Only 1771 contains an even number of digits.

#include<bits/stdc++.h>
using namespace std;
int digits(int num)
{
    if(num<0)
    {
        num=num*-1;
    }
    int count=0;
    while(num>0)
    {
        count++;
        num=num/10;
    }
    return count;
}
int digits2(int num)
{
    if(num<0)
    {
        num=num*-1;
    }
    return(int)(log10(num))+1;
}
bool even(int num)
{
    int digitNumber=digits2(num);
    if(digitNumber%2==0)
    {
        return true;
    }
    return false;
}

int findNumbers(int nums[],int n)
{
    int totalEvenNo=0;
    for(int i=0;i<n;i++)
    {
        if(even(nums[i]))
        {
            totalEvenNo++;
        }
    }
    return totalEvenNo;
}

int main()
{
    int nums[]={10,89,90,5678,123456,3,4,6,7923,-98};
    int n=sizeof(nums)/sizeof(nums[0]);
    int answer=findNumbers(nums,n);
    cout<<answer;
}