// First two lines are wirtten on page. A student does the following things:
// 1. Copies the words from the 1st and 2nd line and writes on the 3rd line.
// 2.Copies the words from 2nd and 3rd line and writes to the 4th line.
// 3.continues until the last line of the page.

// Conditions:
// 1.Number of words in the 1st and 2nd line should be atleast 1.
// 2.Number of word in 2nd line should be more than the number of words in the 1st line.

// Input:
// 1
// 2
// 5//total number of lines

// Ouput: 8

// Explaination:
// 1
// 2
// 3
// 5
// 8

// Input:
// 3
// 1
// 10//total number of lines

// Ouput: Invalid input

// Explaination:

// 2nd line is greater than the first line

#include <bits/stdc++.h>
using namespace std;

int findAnswers(int firstPage, int secondPage, int finalPage)
{
    int a, b, c;
    a = firstPage;
    b = secondPage;
    c = finalPage;
    int arr[c];
    if (a <= 0 || b <= 0 || a > b)
    {
        cout << "Invalid input";
        exit(0);
    }
    else
    {
        arr[0] = a;
        arr[1] = b;
        for (int i = 2; i <= c; i++)
        {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
    }
    return arr[c - 1];
}

int main()
{
    int firstPage, secondPage, finalPage;
    cin >> firstPage >> secondPage >> finalPage;
    cout << findAnswers(firstPage, secondPage, finalPage);
    return 0;
}