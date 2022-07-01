// Example 1:
// Input: Str =  “ABCDCBA”
// Output: Palindrome
// Explanation: String when reversed is the same as string.

// Example 2:
// Input: Str = “PRACTICE”
// Output: Not Palindrome
// Explanation: String when reversed is not the same as string.

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str,int size)
{
    for(int i=0;i<(size/2);i++)
    {
        if(str[i]!=str[size-i-1])
            return 0;
    }
    return 1;
}
int main()
{
    string str;
    cin>>str;
    int size=str.length();
    if(isPalindrome(str,size))
    {
        cout<<"Palindrome";
    }
    else   
        cout<<"Not a palindrome";
    return 0;
}