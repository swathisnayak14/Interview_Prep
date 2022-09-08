// Input: n=3
//        set=2

// Output: 14

// Explaination:
// n is power to 2 , ie: 2 power 3 is 8. so first 8 numbers of 3 bits are taken.
// 0-000
// 1-001
// 2-010
// 3-011
// 4-100
// 5-101
// 6-110
// 7-111

// set is 2 means the number of one should be 2 in a number.

// 3,4,6 have two number of ones in them, so adding all of those we get 14 which is the __GCC_ASM_FLAG_OUTPUTS__

#include <bits/stdc++.h>
using namespace std;

int setBit(int set, int n)
{
    int ans = 0;
    for (int i = 0; i < pow(2, n); i++)
    {
        int x = i;
        int count = 0;
        while (x > 0)
        {
            if (x & 1)
                count++;
            x = x >> 1;
        }

        if (count == set)
            ans += i;
    }

    return ans;
}
int main()
{
    int n = 3;
    int set = 2;
    cout << setBit(set, n);
    return 0;
}