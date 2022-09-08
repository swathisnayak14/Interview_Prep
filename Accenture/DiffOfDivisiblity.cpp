// // The function accepts 2 integers m and n as arguments. Find the sum of al the numbers in the range from 1 to m(Both inclusive) that are
// // not divisible by n. Return diff between sum of integers not divisible by n with the sum of numbers divisible by n.

// // Input: n=2, m=4
// // Output: 2

// Explaination:

// From 1 to m:
// 1 2 3 4

// 1 and 3 are not divisible by n; add them and store in one variable;
// 2 and 4 are divisible by n; add them and store in another varaible;

// Finally get the  difference of the two different variables.

#include <bits/stdc++.h>
using namespace std;

int difference(int n,int m)
{
    int div1=0,div2=0;
    for(int i=1;i<=m;i++)
    {
        if(i%n==0)
        {
             div1+=i;
        }

        else
        {
            div2+=i;
        }
    }

    int res=abs(div1-div2);
    return res;
}

int main()
{
    int n = 2, m = 4;
    cout << difference(n, m);
    return 0;
}