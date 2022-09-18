// Given a string s of '(' , ')' and lowercase English characters.

// Your task is to remove the minimum number of parentheses ( '(' or ')', in any positions ) so that the resulting parentheses string
// is valid and return any valid string.

// Formally, a parentheses string is valid if and only if:

// It is the empty string, contains only lowercase characters, or
// It can be written as AB (A concatenated with B), where A and B are valid strings, or
// It can be written as (A), where A is a valid string.

// Example 1:

// Input: s = "lee(t(c)o)de)"
// Output: "lee(t(c)o)de"
// Explanation: "lee(t(co)de)" , "lee(t(c)ode)" would also be accepted.
// Example 2:

// Input: s = "a)b(c)d"
// Output: "ab(c)d"
// Example 3:

// Input: s = "))(("
// Output: ""
// Explanation: An empty string is also valid.

#include <bits/stdc++.h>
using namespace std;

void minimumRemoval(string str)
{
    stack<int> st;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            st.push(i); // we push the index of that particular bracket as there can be many closing anf opening brackets and it wont bw easy to see which one to delete.
        }

        else if(str[i]==')')
        {
            if (!st.empty() && str[st.top()] == '(')
            {
                st.pop();
            }
            else
                st.push(i);
        }
    }

    while(!st.empty())//removing watever elements are there in the stack.
    {
        str.erase(st.top(),1);//removing 1 element at a time
        st.pop();
    }
    cout<<str;
}

int main()
{
    string s = "lee(t(c)o)de)";
    minimumRemoval(s);
    return 0;
}