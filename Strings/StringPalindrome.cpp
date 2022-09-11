//String Palindrome
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i, flag = 0, length = 0;
    cin >> str;
    length = strlen(str);
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] == str[length - i - 1])
            flag++;
    }
    if (flag == i)
        cout << "PALINDROME";
    else
        cout << " NOT A PALINDROME";
    return 0;
}