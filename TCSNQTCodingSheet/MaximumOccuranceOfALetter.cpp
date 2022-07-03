// Find the occurances of character which appears max in the input string.
// If there are 2 or more characters of same frequency in string,print 0 else print the maximum occurances
//  Input: Abcadr
//  Output:2

// Input: abcabc
// Ouput: 0

#include <bits/stdc++.h>
using namespace std;
void findMaxOccurances(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    int size = str.length();
    map<char, int> m;
    for (int i = 0; i < size; i++)
        m[str[i]]++;
    int maxNum = -1;
    for (auto it : m)
    {
        if (it.second > maxNum)
        {
            maxNum = it.second;
        }
    }
    int count = 0;
    for (auto it : m)
    {
        if (it.second == maxNum)
        {
            count++;
        }
    }

    if (count == 1)
        cout << maxNum;
    else
        cout << "0";
}
int main()
{
    string str;
    cin >> str;
    findMaxOccurances(str);
}