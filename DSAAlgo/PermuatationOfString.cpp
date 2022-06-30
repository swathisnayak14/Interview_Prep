// Below are the permutations of string ABC.
// ABC ACB BAC BCA CBA CAB

#include <bits/stdc++.h>
using namespace std;

void permutations(string str, int l, int r)
{
    if (l == r)
        cout << str << endl;
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(str[l], str[i]);
            permutations(str, l + 1, r);
            swap(str[l], str[i]);
        }
    }
}

int main()
{
    string str = "ABCD";
    int n = str.size();
    permutations(str, 0, n - 1);
    return 0;
}