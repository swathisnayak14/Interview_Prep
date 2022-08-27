//  Input string: "hello how are you?"
//     Output:
//     Sentence case string is: "Hello how are you?"

//     Input string: "hello. how are you?"
//     Output:
//     Sentence case string is: "Hello. How are you?"

#include <bits/stdc++.h>
using namespace std;

string sentenceCase(string str)
{
    int n = str.length();

    for (int i = 0; i < n; i++)
    {
        if (i == 0 && tolower(str[i]))
        {
            str[i] = toupper(str[i]);
        }

        if (str[i] == '.')
        {
            if (str[i + 1] == ' ')
            {
                if (tolower(str[i + 2]))
                {
                    str[i + 2] = toupper(str[i + 2]);
                }
            }
            else
            {
                str[i + 1] = toupper(str[i + 1]);
            }
        }
    }
    return str;
}

int main()
{
    string str = "hello. how are you?";
    cout << sentenceCase(str);
    return 0;
}