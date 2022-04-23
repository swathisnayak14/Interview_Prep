// Given An Array Of N Element's As Input And A Number For Which The Product Of Any Two Numbers Within The Array Has To Be Equal To. It's Important To Know That The Two Numbers Printed
//In Console Output Shall Be In Descending Order Having The Minimum Difference Among The Rest Of The Solution's.

// Example :

// Input :
// 5 // Count Of Array Element's
// 1 10 2 3 5 // Array Element's
// 10 // The Product Of Any Two Numbers Has To Be "10"

// Output :
// 5 2 // The Output For The Above Given Input Need's To Be Printed With A Space In Between

// Explanation:

// In The Above Given Array We Notice, There Are 2 Ways To Get The Product Value To Be 10, i.e., 1 And 10 As One Pair, Where As 2 And 5 Another Pair.
// We Gotta Choose The Secind Pair, As The Difference Between The Numbers Has To Be Minimum.
// 1 And 10 Gives 9 As The Difference, Where As 2 And 5 Gives 3. Hence, This Is Choosen. Not To Forget, Since We Need To Print The Output In The Descending Order, The Output Happens To Be :
// "5 2"

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int min = 9999;
    int i, j, N, c, d;
    int a[] = {1, 10, 2, 3, 5};
    int n = sizeof(a) / sizeof(a[0]);
    cin >> N;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (a[i] * a[j] == N)
            {
                if (abs(a[i] - a[j]) < min)
                {
                    min = abs(a[i] - a[j]);
                    c = a[i];
                    d = a[j];
                }
            }
        }
    }
    cout << d << " " << c;
    return 0;
}