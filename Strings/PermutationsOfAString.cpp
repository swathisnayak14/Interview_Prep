// Given a string find the number of permutations possible from its characters.

// Example:
// INPUT: abc
// OUTPUT:6

// INPUT:abcc
// OUPUT: 12

// INPUT:hello
// OUPUT: 60

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int permutationOfAChar(string str)
{
    int n = str.size();

    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[str[i]]++;
    }

    int answer = fact(n);
    for (auto it : mp)
    {
        answer = answer / fact(it.second);
    }
    return answer;
}
int main()
{
    string str = "hello";
    cout << permutationOfAChar(str);
    return 0;
}