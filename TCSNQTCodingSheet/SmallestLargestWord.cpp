// Given a string, find the minimum and the maximum length words in it.
// Examples:

// Input : "This is a test string"
// Output : Minimum length word: a
//          Maximum length word: string

// Input : "GeeksforGeeks A computer Science portal for Geeks"
// Output : Minimum length word: A
//          Maximum length word: GeeksforGeeks

#include <bits/stdc++.h>
using namespace std;

void occurancesOfWord(string str)
{
    int maxSize = 0, minSize = INT_MAX;
    string maxWord, minWord;
    istringstream ss(str);
    string word;
    while (ss >> word)
    {
        if (maxSize < word.length())
        {
            maxSize = word.length();
            maxWord = word;
        }
        else if (minSize > word.length())
        {
            minSize = word.length();
            minWord = word;
        }
    }
    cout << "maxword : " << maxWord << endl;
    cout << "minword : " << minWord << endl;
}

int main()
{
    string str;
    getline(cin, str);
    occurancesOfWord(str);
}