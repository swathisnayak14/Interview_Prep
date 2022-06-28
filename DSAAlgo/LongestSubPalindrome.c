// Find the length of the longest palindromic subsequence within a
// given string by rearranging the characters:
// Input: abcdabcde
// Output: 9
// Input: abcdeab
// Output: 5

#include<stdio.h>

int longestSubPalindrome(char *str)
{
    int arr[26]={0};
    int odd=0,count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        arr[str[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]%2==0)
            count+=arr[i];
        else{
            count+=arr[i]-1;
            odd=1;//indicating that there is one character odd time
        }
    }
    return count+odd;
}
void main()
{
    char str[100]="abcdabcdeeehjklh";
    printf("%d",longestSubPalindrome(str));
}