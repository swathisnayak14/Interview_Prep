// Program to reverse sentence without reversing words in C++ with simple algorithms using stack. This algorithm also handles spaces and special
//  characters in the sentence or a given string.

// TEST CASES:
// Input: Hello World!!!
// Output: !!!World Hello

// Input: "Hello How are you ?"
// Output: "? you are How Hello"

#include <bits/stdc++.h>
using namespace std;

void reverseSentence(string str)
{

    stack<string> s;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        string res = "";
        while (str[i] != ' ' && str[i] != '\0')
        {
            res += str[i];
            i++;
        }
        s.push(res);
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main()
{
    string str = "Hello How are you?";
    reverseSentence(str);
    return 0;
}