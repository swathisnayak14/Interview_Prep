// Given a sentence that consists of some words separated by a single space, and a searchWord, check if searchWord is a prefix of any word

// in sentence.

// Return the index of the word in sentence (1-indexed) where searchWord is a prefix of this word. If searchWord is a prefix of more than one word, return the index of the first word (minimum index). If there is no such word return -1.

// A prefix of a string s is any leading contiguous substring of s.

// Example 1:

// Input: sentence = "i love eating burger", searchWord = "burg"
// Output: 4
// Explanation: "burg" is prefix of "burger" which is the 4th word in the sentence.
// Example 2:

// Input: sentence = "this problem is an easy problem", searchWord = "pro"
// Output: 2
// Explanation: "pro" is prefix of "problem" which is the 2nd and the 6th word in the sentence, but we return 2 as it's the minimal index.
// Example 3:

// Input: sentence = "i am tired", searchWord = "you"
// Output: -1
// Explanation: "you" is not a prefix of any word in the sentence.

#include <bits/stdc++.h>
using namespace std;

int wordsOccursAsPrefix(string sentence, string searchWord)
{
    string check;
    int count = 0;
    int n = searchWord.size();
    for (char c : sentence)
    {
        if (c == ' ')
        {
            if (check.size() >= n && check.substr(0, n) == searchWord) // found the substring in the string sentence
            {
                return count + 1;
            }
            else // if the substring is not present then incerement to see next
            {
                count++;
                check = "";
            }
        }
        else // not a space
        {
            check += c; // add the character to check string
        }
    }
    if (check.size() >= n && check.substr(0, n) == searchWord) // same as line 37, should check again at the last for the last word
    {
        return count + 1;
    }
    return -1;
}

int main()
{
    string sentence = "this problem is an easy problem";
    string searchWord = "pro";
    cout << wordsOccursAsPrefix(sentence, searchWord);
    return 0;
}