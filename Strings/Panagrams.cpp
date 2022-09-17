// A pangram is a sentence where every letter of the English alphabet appears at least once.

// Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

// Example 1:

// Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
// Output: true
// Explanation: sentence contains at least one of every letter of the English alphabet.
// Example 2:

// Input: sentence = "leetcode"
// Output: false

#include <bits/stdc++.h>
using namespace std;

bool panagram(string sentence)
{
    vector<int> v(26, 0); // here 0 is the initital count set for all the 26 characters

    for (int x : sentence)
    {
        v[x - 97]++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (!v[i])
            return 0;
    }
    return 1;
}
int main()
{
    string sentence = "thequickbrownfoxjumpsoverthelazydog";

    if (panagram(sentence))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}