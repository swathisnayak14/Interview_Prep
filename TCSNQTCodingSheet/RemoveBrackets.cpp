// Example 1:
// Input: “a+((b-c)+d)”
// Output: “a+b-c+d”
// Explanation: Removed all the brackets in the algebric expression.

// Example 2:
// Input: “(((a-b))+c)”
// Output: “a-b+c”
// Explanation: Removed all the brackets in the algebric expression.

#include<bits/stdc++.h>
using namespace std;

void removeBrackets(string str,int n)
{
    string answer;
    for(int i=0;i<n;i++)
    {
        if(str[i]!='(' &&str[i]!=')')
            answer.push_back(str[i]);
    }
    cout<<answer;
}
int main()
{
    string str="(((a-b))+c)";
    int n=str.length();
    removeBrackets(str,n);
    return 0;
}