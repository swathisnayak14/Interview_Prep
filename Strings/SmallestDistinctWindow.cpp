// Given a string, find the smallest window length with all distinct characters of the given string. For eg. str = “aabcbcdbca”, then the
//  result would be 4 as of the smallest window will be “dbca” .
// Examples:

// Input: aabcbcdbca
// Output: dbca
// Explanation:
// Possible substrings= {aabcbcd, abcbcd,
// bcdbca, dbca....}
// Of the set of possible substrings 'dbca'
// is the shortest substring having all the
// distinct characters of given string.

// Input: aaab
// Output: ab
// Explanation:
// Possible substrings={aaab, aab, ab}
// Of the set of possible substrings 'ab'
// is the shortest substring having all
// the distinct characters of given string.

#include <bits/stdc++.h>
using namespace std;

void smallestWindow(string str)
{
    unordered_map<char, int> m;
    set<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        s.insert(str[i]);
    }
    int n = s.size();
    int i = 0;
    int j = 1;
    m[str[i]]++; // taking in the first character into the map and incrementing it.
    int c = 0;
    c++;

    int mini = INT_MAX;
    while (i <= j and j < str.length())
    {
        if (c < n)
        {
            if (m[str[j]] == 0)
                c++;
            m[str[j]]++;
            j++;
        }
        else if (c == n)
        {
            mini = min(mini, j - i);
            if (m[str[i]] == 1)
                c--;
            m[str[i]--];
            i++;
        }
    }
    while (c == n)
    {
        mini = min(mini, j - i);
        if (m[str[i]] == 1)
            c--;
        m[str[i]--];
        i++;
    }
    cout << mini;
}
int main()
{
    string str = "aaab";
    smallestWindow(str);

    return 0;
}