// Given a string, convert the characters of the string into opposite case,i.e. if a character is lower case then convert it into upper case and vice-versa.

// Examples:

// Input : geeksForgEeks
// Output : GEEKSfORGeEKS

// Input : hello every one
// Output : HELLO EVERY ONE

#include <bits/stdc++.h>
using namespace std;

void convertOpposite(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    cout<<str;
}

int main()
{
    string str = "GeEkSfOrGeEkS";
    convertOpposite(str);
    return 0;
}