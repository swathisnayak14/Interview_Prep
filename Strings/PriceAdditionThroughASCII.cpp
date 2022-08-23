// finding the price using barcode.

// finding the ASCII value of every character on the barcode.If its 2 digit or 3 digit ASCII valye,note down the maximum of the 2 digit or 3 digit
// ASCII value for each character.The final price will be the sum of all the numbers obtained from the ASCII value of each character on the
// barcode.

// Gievn the barcode(B) ,find the final proce of each product

// Note: The barcode can consists of letter(upper or lower),numbers(0 to 9) and special characters.
// The value of the number is directly added without calculating its ASCII value.

// Example 1:

// Input: 12ab
// Ouput:21

// Explaination: 1 2 a=97 b=98
//               1+2+9+9=21

#include <bits/stdc++.h>
using namespace std;

int findMaxDigit(int num)
{
    int max = 0;
    while (num != 0)
    {
        int rem = num % 10;
        if (rem > max)
        {
            max = rem;
        }
        num /= 10;
    }
    return max;
}
int PriceAddition(string s)
{
    int n = s.size();
    int price=0;
    for (int i = 0; i < n; i++)
    {
        if (isdigit(s[i]))
        {
            price += (s[i] - 48);
        }

        else
        {
            price += findMaxDigit(int(s[i]));
        }
    }
    return price;
}

int main()
{
    string s = "12ab";
    cout << PriceAddition(s);
}