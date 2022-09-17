//  Given a list of strings words and a string pattern, return a list of words[i] that match pattern. You may return the answer in any order.

// A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get
// the desired word.

// Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the
//  same letter.

// Example 1:

// Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
// Output: ["mee","aqq"]
// Explanation: "mee" matches the pattern because there is a permutation {a - m, b - e, ...}.
// "ccc" does not match the pattern because {a - c, b - c, ...} is not a permutation, since a and b map to the same letter.
// Example 2:

// Input: words = ["a","b","c"], pattern = "a"
// Output: ["a","b","c"]

#include <bits/stdc++.h>
using namespace std;

vector<string> findAndReplace(vector<string> words, string pattern)
{
    vector<string> ans;
    for (int i = 0; i < words.size(); i++)
    {
        // for each word
        map<char, char> m1;
        map<char, char> m2;
        int flag = 1;
        for (int j = 0; j < words[i].size(); j++)
        {
            // words[i] = "mee"  pattern = "abb"

            auto it = m1.find(pattern[j]);
            auto it2 = m2.find(words[i][j]); // finding 'a'
            if (it == m1.end())              // reached the end and the character is not present in the map, then you insert it
            {
                m1.insert({pattern[j], words[i][j]}); //'a':'m'
            }

            else // already the match is present in the map
            {
                if (it->second != words[i][j]) //'a':'r'
                {
                    flag = 0;
                    break;
                }
            }
            if (it2 == m2.end()) // reached the end and the character is not present in the map, then you insert it
            {
                m2.insert({words[i][j], pattern[j]}); //''m:'a'
            }

            else // already the match is present in the map
            {
                if (it2->second != pattern[j]) //'r':'a'
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag) // the characters are matches so push to the ans
        {
            ans.push_back(words[i]);
        }
    }
    return ans;
}

int main()
{
    vector<string> words{"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    string pattern = "abb";
    vector<string> answer = findAndReplace(words, pattern);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    return 0;
}