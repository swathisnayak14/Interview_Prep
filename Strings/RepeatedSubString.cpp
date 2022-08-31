// Input:s="abab"
// Output:true
// Given a string s,check if it can be constructed by taking a substring of it and appending multiple copies of the substring together

#include <bits/stdc++.h>
using namespace std;

bool repeatedStr(string s)
{
    return (s+s).substr(1,2*s.size()-2).find(s)!=-1;//a bababa b 
}

int main()
{
    string str = "abcdabcdabcdabcd";

    if (repeatedStr(str))
    {
        cout << "true";
    }

    else
    {
        cout << "false";
    }
    return 0;
}