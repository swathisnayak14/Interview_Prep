// Given a string and the task is to count vowels, consonant, digits and special character in string. Special character also contains the white space.
// Examples:

// Input : str = "geeks for geeks121"
// Output : Vowels: 5
//          Consonant: 8
//          Digit: 3
//          Special Character: 2

// Input : str = " A1 B@ d  adc"
// Output : Vowels: 2
//          Consonant: 4
//          Digit: 1
//          Special Character: 6

 #include <bits/stdc++.h>
using namespace std;

void countOccurances(string str)
{
    int vowels = 0, consonants = 0, spaces = 0, digits = 0, specialCharacters = 0;
    // int size = str.length();
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            // transform(str.begin(), str.end(), str.begin(), ::tolower);
            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if(ch==' ')
            spaces++;
        else
            specialCharacters++;
    }
    cout << vowels << endl;
    cout << consonants << endl;
    cout << digits << endl;
    cout << spaces << endl;
    cout << specialCharacters;
}
int main()
{
    string str;
    cin >> str;
    countOccurances(str);
}

