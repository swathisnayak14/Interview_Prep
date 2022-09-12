// Given an expression with only ‘}’ and ‘{‘. The expression may not be balanced. Find minimum number of bracket reversals to make the expression
// balanced.
// Examples:

// Input:  exp = "}{"
// Output: 2
// We need to change '}' to '{' and '{' to
// '}' so that the expression becomes balanced,
// the balanced expression is '{}'

// Input:  exp = "{{{"
// Output: Can't be made balanced using reversals

// Input:  exp = "{{{{"
// Output: 2

// Input:  exp = "{{{{}}"
// Output: 1

// Input:  exp = "}{{}}{{{"
// Output: 3

#include <bits/stdc++.h>
using namespace std;

void minBracketReversal(string str)
{
    if (str.length() & 1) // if length is odd
        cout<< "-1";

    else
    {
        int ans;
        stack<char> s;
        int count1 = 0; // count for the closing brackets
        int count2 = 0; // count for the opening brackets
        for (int i = 0; i < str.length(); i++)
        {
            char ch = str[i];
            if (ch == '{')
            {
                s.push(str[i]);
                count2++;
            }

            else if (ch == '}' and !s.empty() and s.top() == '{')
            {
                s.pop();
                count2--;
            }
            else
            {
                count1++;
            }
        }
        if (count1 & 1)
            count1 = (count1 / 2) + 1;
        else
            count1 = count1 / 2;

        if (count2 & 1)
            count2 = (count2 / 2) + 1;
        else
            count2 = count2 / 2;
        cout << count1 + count2;
    }
}

int main()
{
    string str = "}{{}}{{{";
    minBracketReversal(str);
    return 0;
}