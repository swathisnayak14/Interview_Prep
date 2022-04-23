// Given a string and a character, task is to make a function which count occurrence of the given character in the string.
 

// Examples:  

// Input : str = "geeksforgeeks"
//          c = 'e'
// Output : 4
// 'e' appears four times in str.

// Input : str = "abccdefgaa"
//           c = 'a' 
// Output : 3
// 'a' appears three times in str.

#include<bits/stdc++.h>
using namespace std;

void occuranceChar(string str,char find)
{
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==find)
        {
            count++;
        }
    }
    cout<<count;
}

int main()
{
    string str="ggggeeeeekkk";
    char c='e';
    occuranceChar(str,c);
}