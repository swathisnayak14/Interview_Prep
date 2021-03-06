// Algorithm: 
// One obvious approach to solve this problem would be to sort the input string and then traverse through the sorted 
// string to find the character which is occurring maximum number of times. Let us see if we can improve on this. 
// So we will use a technique called ‘Hashing’. In this, when we traverse through the string, we would hash each character 
// into an array of ASCII characters. 
 

// Input string = “test”
// 1: Construct character count array from the input string.
//   count['e'] = 1
//   count['s'] = 1
//   count['t'] = 2

// 2: Return the index of maximum value in count array (returns ‘t’).
// Typically, ASCII characters are 256, so we use our Hash array size as 256. But if we know that our input string will have 
// characters with value from 0 to 127 only, we can limit Hash array size as 128. Similarly, based on extra info known about 
// input string, the Hash array size can be limited to 26.

#include<bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;
char maxOccurance(char* str)
{
    int count[ASCII_SIZE]={0};
    int max=0;
    int result;
    for(int i=0;i<strlen(str);i++)
    {
        count[str[i]]++;
        if(count[str[i]]>max)
        {
            max=count[str[i]];
            result=str[i];
        }
    }
    return result;
}

int main()
{
    char str[]="sample string";
    cout<<maxOccurance(str);
}