// Input:n=1210
// Output:3

// Explaination:

// the 0th index which has 1 represents the number of 0 in the number.
// the 1st index which has 2 represents the number of 1 in the number.
// the 2nd index which has 1 represents the number of 2 in the number.
// the 3rd index which has 0 represents the number of 3 in the number.

#include <bits/stdc++.h>
using namespace std;

int autobiograhicalNumber(string str)
{
    int a[10] = {0};

    // frequency

    for (int i = 0; i < str.length(); i++)
    {
        a[str[i]-'0']++;
    }

    // autobiograhicalNumber or not

    for (int i = 0; i < str.length(); i++)
    {
        if (a[i] != str[i]-'0')
            return 0;
    }

    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > 0)
            count++;
    }
    return count;
}
int main()
{
    string str;
    cin >> str;
    cout << autobiograhicalNumber(str);
    return 0;
}
