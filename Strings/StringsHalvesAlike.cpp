// Input:s="book"
// Output:true

// Explaination:

// You are given a string s of even length. Spilt the string into two halves of equal length, and let a be the first half and b be the second half.
// Two strings are alike if they have the same number of voweks(a,e,i,o,u,A,E,I,O,U). The string contains both upper and lowercase letter. Return
// true of a and b are alike. Otherwise, return false

#include <bits/stdc++.h>
using namespace std;

bool strAlike(string str)
{
    int size = str.size();
    string a = str.substr(0, size / 2);
    string b = str.substr(size / 2, size / 2);

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    int count = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            count++;

        if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')
            count--;
    }

    if (count)
        return 0;
    return 1;
}

int main()
{
    string str = "TEXTbook";
    cout << strAlike(str);
    return 0;
}