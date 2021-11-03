// Given a string in roman no format (s)  your task is to convert it to an integer . Various symbols and their values are given below.
// I 1
// V 5
// X 10
// L 50
// C 100
// D 500
// M 1000

// Example 1:

// Input:
// s = V
// Output: 5
// Example 2:

// Input:
// s = III
// Output: 3

#include <bits/stdc++.h>
using namespace std;
int romanToInt(string &S)
{
    map<char, int> roman;
    roman.insert(pair<char, int>('I', 1));
    roman.insert(pair<char, int>('V', 5));
    roman.insert(pair<char, int>('X', 10));
    roman.insert(pair<char, int>('L', 50));
    roman.insert(pair<char, int>('C', 100));
    roman.insert(pair<char, int>('D', 500));
    roman.insert(pair<char, int>('M', 1000));

    int len = S.length(), num, sum = 0;
    for (int i = 0; i < len;)
    {
        if (i == len - 1 || roman[S[i]] >= roman[S[i + 1]])
        {
            num = roman[S[i]];
            i++;
        }
        else
        {
            num = roman[S[i + 1]] - roman[S[i]];
            i += 2;
        }
        sum += num;
    }
    return sum;
}
int main()
{
    string s;
    cin >> s;
    cout << romanToInt(s) << endl;
    return 0;
}