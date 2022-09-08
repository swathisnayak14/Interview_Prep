// The function accepts a string 'str' as its arguments. The string 'str' consists of binary digits seperated with an alphabet as follows:
//     -> 'A' denotes AND operation
//     -> 'B' denotes OR operation
//     -> 'C' denotes XOR operation

// Calculate the reuslt of the string 'str', scanning the string left to right, taking one operation at a time and return the same.

// Input: 1C0C1C1A0B1
// Output:1

// Explaination:

// 1C0-> 1 XOR 0 = 1
// 1C1-> 1 XOR 1 = 0
// OC1-> 0 XOR 1 = 1
// 1A0-> 1 AND 0 = 0
// 0B1-> 0 OR  1 = 1

#include <bits/stdc++.h>
using namespace std;

char AND(char a, char b)
{
    if (a == '1' and b == '1')
        return '1';
    return '0';
}

char OR(char a, char b)
{
    if (a == '0' and b == '0')
        return '0';
    return '1';
}

char XOR(char a, char b)
{
    if (a == b)
        return '0';
    return '1';
}

int binarystr(string str)
{
    if (str.length() == 0)
        return -1;
    char res1 = str[0];
    for (int i = 1; i < str.length(); i=i+2)//i=i+2 means we are accessing only the letters and storing for identifying the operations.
    {
        char op = str[i];       // stores whether A,B or C
        char res2 = str[i + 1]; // stores the binary strings

        if (op == 'A')
        {
            res1 = AND(res1, res2);
        }
        else if (op == 'B')
        {
            res1 = OR(res1, res2);
        }
        else
        {
            res1 = XOR(res1, res2);
        }
    }

    return res1=='1'?1:0;
}

int main()
{
    string str = "1C0C1C1A0B1";
    cout << binarystr(str);
    return 0;
}