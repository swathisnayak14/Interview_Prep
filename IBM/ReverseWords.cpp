// Given a string str, we need to print reverse of individual words.
// Examples:

// Input : Hello World
// Output : olleH dlroW

#include <bits/stdc++.h>
using namespace std;
void reverseWords(string str)
{
    int size = str.length();
    stack<char> s;
    for (int i = 0; i < size; i++)
    {
        if (str[i] != ' ')
            s.push(str[i]);
        else
        {
            while (s.empty() == false)
            {
                cout << s.top();
                s.pop();
            }
            cout << " ";
        }
    }

    while(s.empty()==false)
    {
        cout<<s.top();
        s.pop();
    }
}

int main()
{
    string str = "Hello World";
    reverseWords(str);
    return 0;
}