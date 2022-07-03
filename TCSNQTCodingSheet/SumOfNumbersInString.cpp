// Sum of the Numbers in a String
// Problem: Given a string, calculate the sum of numbers in a string (multiple consecutive digits are considered one number)

// Examples:

// Example 1:
// Input: string = “123xyz”
// Output: 123

// Example 2:
// Input: string = “1xyz23”
// Output: 24

#include <bits/stdc++.h>
using namespace std;

int findSum(string str)
{
    string temp = "";
    int sum = 0;
    for (char ch : str)
    {
        if (isdigit(ch))
            temp += ch;
        else
        {
            sum += atoi(temp.c_str());
            temp = "";
        }
    }
    return sum + atoi(temp.c_str());
}

int main()
{
    string str = "12abc20yz68";
    cout << findSum(str);
    return 0;
}