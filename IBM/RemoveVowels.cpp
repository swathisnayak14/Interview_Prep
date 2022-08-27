#include <bits/stdc++.h>
using namespace std;

string removeVowels(string str)
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (find(vowels.begin(), vowels.end(), str[i]) != vowels.end())
        {
            str = str.replace(i, 1, "");
            i -= 1;
        }
    }
    return str;
}

int main()
{
    string str = "what is your name ?";
    cout << removeVowels(str);
    return 0;
}