// Input:
// str1 = "rescue";
// str2 = "secure";

// Ouput: Anagrams

#include <bits/stdc++.h>
using namespace std;
int anagrams(string str1, string str2)
{
    if (str1.size() != str2.size())
        return 0;
    map<char, int> m;
    for (char i : str1)
        m[i]++;
    for (char i : str2)
        m[i]--;
    map<char, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second != 0)
            return 0;
    }
    return 1;
}
int main()
{
    string str1 = "rescue";
    string str2 = "secure";
    if (anagrams(str1, str2))
        cout << "Anagrams";
    else
        cout << "Not Anagrams";
    return 0;
}
