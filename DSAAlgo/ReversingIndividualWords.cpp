// Given a string str, we need to print reverse of individual words.
// Examples:

// Input : Hello World
// Output : olleH dlroW

// Input :  Geeks for Geeks
// Output : skeeG rof skeeG

#include <bits/stdc++.h>
using namespace std;

void reverseWords(string str)
{
    stack<char> st;
    int size = str.length();
    for (int i = 0; i < size; i++)
    {
        if (str[i] != ' ')
            st.push(str[i]);
        else
        {
            while (st.empty() == false)
            {
                cout << st.top();
                st.pop();
            }
            cout << " ";
        }
    }

    while (st.empty() == false) // by chance if there is no space after the last word and words are still left
    {
        cout << st.top();
        st.pop();
    }
}

int main()
{
    string str = "Geeks for Geeks";
    reverseWords(str);
    return 0;
}