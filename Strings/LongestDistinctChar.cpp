// Given a string S, find length of the longest substring with all distinct characters.

// Example 1:

// Input:
// S = "geeksforgeeks"
// Output: 7
// Explanation: "eksforg" is the longest
// substring with all distinct characters.
// â€‹Example 2:

// Input:
// S = "aaa"
// Output: 1
// Explanation: "a" is the longest substring
// with all distinct characters.

#include <bits/stdc++.h>
using namespace std;

int longestDistinct(string s1)
{
    int len = s1.length();
    int max = 0, curlen = 0;
    vector<char> v;
    vector<char>::iterator it, it1;

    for (int i = 0; i < len; i++)
    {
        it = find(v.begin(), v.end(), s1[i]);
        if (it != v.end())
        {
            int count = 1;
            it1 = v.begin();

            while (it1 != it)
            {
                it1++;
                count++;
            }
            if (it == v.begin())
                v.erase(it);
            else
                v.erase(v.begin(), ++it);
            v.push_back(s1[i]);
            curlen++;
            curlen -= count;
        }
        else
        {
            v.push_back(s1[i]);
            curlen++;
        }
        if (curlen > max)
            max = curlen;
    }
    return max;
}
int main()
{
    string s;
    cin >> s;
    cout << longestDistinct(s) << endl;
    return 0;
}