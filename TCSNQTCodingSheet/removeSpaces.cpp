// Given a string, remove all spaces from the string and return it. 

// Input:  "g  eeks   for ge  eeks  "
// Output: "geeksforgeeks"

#include<bits/stdc++.h>
using namespace std;

// void removeSpaces(char *str)
// {
//     int count=0;
//     for(int i=0;str[i];i++)
//     {
//         if(str[i]!=' ')
//             str[count++]=str[i];
//     }
//     str[count]='\0';
//     cout<<str;
// }
string removeSpaces(string str)
{
     // alt.way
    str.erase(remove(str.begin(),str.end(),' '),str.end());
        return str;
}
int main()
{
    // char str[] = "g  eeks   for ge  eeks  ";
    // removeSpaces(str);
    string str="g  eeks   for ge  eeks  ";
    str=removeSpaces(str);
    cout<<str;
    return 0;
}