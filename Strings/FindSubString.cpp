// Input:str="hello"
//       substring="ll"

// Output: 2

// Return the index of the 1st occurance of the substring in the str or -1 if substring is not present in str.

#include <bits/stdc++.h>
using namespace std;

int findSubStr(string str, string substring)
{
    if (substring.empty())
        return 0;
    else
    {
        int found = str.find(substring);

        if (found == string::npos)
            return -1;
        return found;
    }
}
int main()
{
    string str = "hello";
    string substring = "ll";

    cout << findSubStr(str, substring);
    return 0;
}