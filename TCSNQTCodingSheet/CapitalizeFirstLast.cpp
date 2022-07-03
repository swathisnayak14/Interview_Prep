// Capitalize first and last character of each word of a string
// Problem Statement: Given a string, write a program to Capitalize the first and last character of each word of that string.

// Examples:

// Example 1:
// Input: String str = "take u forward is awesome"
// Output: “TakE U ForwarD IS AwesomE”
// Explanation: We get the result after capitalizing the first and last character of each word of a string

// Example 2:
// Input: String str = "Take u Forward is Awesome"
// Output: “TakE U ForwarD IS AwesomE”
// Explanation: Characters T, F, A are initially in uppercase , so they remain as they are in the result.

// Things to note:

// (int) str[i] gives the ASCII value of the ith string character
// ((int) str[i] – 32) gives the ASCII value of the Capitalized ith string character
// (char)((int) str[i] – 32) converts the ASCII value to its corresponding character
// In Java , the StringBuffer class is used to create mutable (modifiable) strings.

#include <bits/stdc++.h>
using namespace std;

void Capitalize(string str, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i == 0 || i == (size - 1) && str[i] >= 97)
            str[i] = (char)(((int)str[i] - 32));
        else if (str[i] == ' ')
        {
            if (((int)str[i - 1] - 32) >= 65)
                str[i - 1] = (char)(((int)str[i - 1] - 32));

            if (((int)str[i + 1] - 32) >= 65)
                str[i + 1] = (char)(((int)str[i + 1] - 32));
        }
    }
    cout << str;
}
int main()
{
    string str = "take u forwarD iS Awesome";
    int size = str.length();
    Capitalize(str, size);
    return 0;
}