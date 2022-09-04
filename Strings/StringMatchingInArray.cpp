// Input:words=["mass","as","hero","superhero"]
// Output:["as","hero"]

// Explaination:

// String words[i] is a substring of words[j], if it can be obtained removing some characters to left or right side of the words[j];

#include <bits/stdc++.h>
using namespace std;

static bool wayToSort(const string &a, const string &b)
{
    return a.size() < b.size();
}

vector<string> stringMatching(vector<string> &words)
{
    sort(words.begin(), words.end(), wayToSort);
    vector<string> res;
    for (int i = 0; i < words.size(); i++)
    {
        for (int j = i + 1; j < words.size(); j++)
        {
            if (words[j].find(words[i]) != -1)
            {
                res.push_back(words[i]);
                break;
            }
        }
    }
    return res;
}
int main()
{
    vector<string> words{"mass", "as", "hero", "superhero"};
    vector<string> ans = stringMatching(words);

    for (auto i = ans.begin(); i != ans.end(); i++)
    {
        cout << *i << " ";
    }
    return 0;
}