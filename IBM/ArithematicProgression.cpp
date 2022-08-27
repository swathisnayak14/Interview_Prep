#include <bits/stdc++.h>
using namespace std;

void ap(int num1, int terms, int diff)
{
    int total,k;
    total = (terms * (2 * num1 + (terms - 1) * diff)) / 2;
    int q;
    q = num1 + (terms - 1) * diff;
        if (k != q)
            cout << total;

}

int main()
{
    int num1 = 1, terms = 5, diff = 2;
    ap(num1, terms, diff);
    return 0;
}