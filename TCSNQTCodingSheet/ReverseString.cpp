// INPUT:hello
// OUPUT:olleh

#include <bits/stdc++.h>
using namespace std;

string reverseString(string str, int n)
{
    stack<int> st;
    for (int i = 0; i < n; i++)
        st.push(str[i]);

    int j = 0;
    while (!st.empty())
    {
        char element = st.top();
        st.pop();
        str[j++] = element;
    }
    return str;
}
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    cout << reverseString(str, n);
    return 0;
}