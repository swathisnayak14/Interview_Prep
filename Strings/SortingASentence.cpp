// A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and
// uppercase English letters.

// A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

// For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
// Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.

// Example 1:

// Input: s = "is2 sentence4 This1 a3"
// Output: "This is a sentence"
// Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.
// Example 2:

// Input: s = "Myself2 Me1 I4 and3"
// Output: "Me Myself and I"
// Explanation: Sort the words in s to their original positions "Me1 Myself2 and3 I4", then remove the numbers.

#include <bits/stdc++.h>
using namespace std;

void sortingASentence(string str)
{
    vector<string> v(10);
    string word;
    string ans;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            v[str[i] - 48] = word + " ";
            word = "";
            i++; // as space will be there we need to skip it to reach the next word
        }
        else // if its only a word
        {
            word += str[i];
        }
    }
    for (string x : v)
    {
        ans += x;
    }
    ans.pop_back(); // as in the end space will be left coz of line no 31 we should remove that
    cout << ans;
}

int main()
{
    string s = "is2 sentence4 This1 a3";
    sortingASentence(s);
    return 0;
}