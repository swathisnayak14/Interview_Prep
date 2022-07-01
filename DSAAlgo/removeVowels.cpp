// Example 1:
// Input: Str = “take u forward”
// Output: tk  frwrd
// Explanation: All vowels are removed from the given String.

// Example 2:
// Input: Str = “I am very happy today”
// Output:  m vry happy tdy
// Explanation: All vowels are removed from the given String.

#include <bits/stdc++.h>
using namespace std;

string remVowel(string str)
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int size = str.length();
    for (int i = 0; i < size; i++)
    {
        if (find(vowels.begin(), vowels.end(), str[i]) != vowels.end())
        {
            str = str.replace(i, 1,"");
        }
    }
    return str;
}

int main()
{
    string str = "I am very happy today";
    cout << remVowel(str) << endl;

    return 0;
}