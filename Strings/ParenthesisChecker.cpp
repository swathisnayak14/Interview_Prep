// Input: exp = “[()]{}{[()()]()}”
// Output: Balanced
// Explanation: all the brackets are well-formed

// Input: exp = “[(])”
// Output: Not Balanced
// Explanation: 1 and 4 brackets are not well formed

#include <bits/stdc++.h>
using namespace std;

bool parenthesisChecker(string exp)
{
    stack<char> s;
    char a;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '{' || exp[i] == '[' || exp[i] == '(')
        {
            s.push(exp[i]);
            continue;
        }

        if (s.empty()) // if there is no open parenthesis
            return false;

        switch (exp[i])
        {
        case ')':
            a = s.top();
            s.pop();

            if (a == '{' || a == '[')
                return false;

            break;

        case '}':
            a = s.top();
            s.pop();

            if (a == '(' || a == '[')
                return false;

            break;

        case ']':
            a = s.top();
            s.pop();

            if (a == '{' || a == '(')
                return false;
        }
    }

    return (s.empty());
}
int main()
{
    string exp = "[()]{}{[()()]()}";
    if (parenthesisChecker(exp))
    {
        cout << "Balanced\n";
    }
    else
    {
        cout << "Unbalanced\n";
    }
    return 0;
}