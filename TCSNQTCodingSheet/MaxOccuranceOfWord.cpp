// INPUT: "I LOVE TO TEACH TO A LOT OF PEOPLE"
// OUPUT: TO

#include <bits/stdc++.h>
using namespace std;

void occurancesOfWord(string str)
{
    unordered_map<string, int> m;
    int maxCount = INT_MIN;
    string maxOccurWord;
    istringstream ss(str);
    string word;
    while (ss >> word)
        m[word]++;
    unordered_map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
        if (it->second > maxCount)
        {
            maxOccurWord = it->first;
            maxCount = it->second;
        }
    cout << maxOccurWord << ":" << maxOccurWord.length() << endl;
}

int main()
{
    string str;
    getline(cin, str);
    occurancesOfWord(str);
}