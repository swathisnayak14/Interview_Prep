#include <bits/stdc++.h>
using namespace std;

int searchCharpos(string str, char findChar)
{
    size_t found = str.find(findChar);
    if (found != string::npos)
        return found;
    return 0;
}

int main()
{
    string str = "good morning";
    char findChar = 'o';
    cout << searchCharpos(str, findChar);
    return 0;
}