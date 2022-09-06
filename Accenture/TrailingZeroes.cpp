// Input : 5
// Output : 1

//     Explaination : 5 != 120. 120 has 1 zero

//     Simple trick: the input/5=1 eg: 5 is the input 5/5=1,check if 1>5, if no then 1 is our final answers and 5! has 1 trailing zero.
//     eg: 10 is the input 10/5=2,check if 2>5, if no then 2 is our final answers and 10! has 2 trailing zeroes.
//     eg: 100 is the input 100/5=20,check if 20>5, if yes then did 20/5=4 and check id 4>5 if no then 20+4 is our final answers and 100! has 24
//      trailing zero.

#include <bits/stdc++.h>
using namespace std;

int trailingZeroes(int n)
{
    int count = 0;
    for (int i = 5; n / i >= 1; i=i*5)
    {
        count += n / i;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << trailingZeroes(n);
    return 0;
}