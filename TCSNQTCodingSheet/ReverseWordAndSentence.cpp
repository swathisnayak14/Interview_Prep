// Input: s = “geeks quiz practice code”
// Output: s = “code practice quiz geeks”

// Input: s = “getting good at coding needs a lot of practice”
// Output: s = “practice of lot a needs coding at good getting

#include <bits/stdc++.h>
using namespace std;
void reverseWords(string s)
{
    // using vector to store the words
    vector<string> temp;
    int n = s.length();
    string str = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ') // once a space is encountered whatever is present in the str is pushed into temp in the reverse order
        {
            temp.push_back(str);
            str = " ";
        }
        else
            str += s[i]; // until space encounters, the characters are being placed in the str
    }
    temp.push_back(str); // pushing the last word into temp

    int i;
    int size = temp.size() - 1;
    for (int i = size; i > 0; i--)
        cout << temp[i] << " ";
    cout << temp[0];
}

int main()
{
    string s = "i like this program very much";
    reverseWords(s);
    return 0;
}