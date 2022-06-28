// Find the length of the longest palindromic subsequence within a
// given string by rearranging the characters:
// Input:;;66!!AAaa)(*&abcdef
//  Output:

#include<stdio.h>

int longestSubPalindrome(char *str)
{
    int count=0,odd=0;
    int arr[128]={0};
    for(int i=0;str[i]!='\0';i++)
    {
        arr[str[i]]++;
    }
    for(int i=0;i<127;i++)
    {
        if(arr[i]%2==0)
            count+=arr[i];
        else{
            count+=arr[i]-1;
            odd=1;
        }
    }
    return odd+count;
}
void main()
{
    char str[100]=";;66!!AAaa)(*&abcdef";
    printf("%d",longestSubPalindrome(str));
}