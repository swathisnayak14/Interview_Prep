// Input: arr[] = {“sun”, “moon”, “mock”}
// Output:
// mock
// moon
// sun
// Explanation:
// The lexicographical sorting is mock, moon, and sun.

// Input: arr[] = {“geeks”, “geeksfor”, “geeksforgeeks”}
// Output:
// geeksforgeeks
// geeksfor
// geeks

#include <bits/stdc++.h>
using namespace std;

void sortStrings(string str[], int n)
{
    string temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << str[i]<<endl;
    }
}
int main()
{
    int n; // numbre of words
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    sortStrings(str, n);
    return 0;
}