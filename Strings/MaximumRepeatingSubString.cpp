// Input:sstring="ababc"
//        substring="ab"
// Ouput:2

// A string substring is k-repeating if the word concatenated k times is a substring of a sequence. The substring's maximum k-repeating
// value is the highest value k where substring id k-repeating in sequence.

#include <bits/stdc++.h>
using namespace std;

int maxRepeat(string str, string sub)
{
    int k = 0;
    string temp = sub;
    while (str.find(temp) != string::npos)
    {
        temp = temp + sub;
        k++;
    }
    return k;
}

int main()
{
    string str = "ababc";
    string sub = "ab";

    cout << maxRepeat(str, sub);
    return 0;
}