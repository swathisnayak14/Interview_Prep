// FORMULA:(-b+or-sq root(b^2-4ac))/2a
// b^2-4ac>0-real roots
// b^2-4ac=0-equal roots
// b^2-4ac<0-complex roots here it become inverse numbers i=sqrt(-d)/(2*a)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, d, r1, r2, r, i;
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        cout << r1 << " " << r2;
    }

    else if (d == 0)
    {
        r1 = r2 = b / (2 * a);
        cout << r1;
    }

    else
    {
        r = b / (2 * a);
        i = sqrt(-d) / (2 * a);

        cout << r + i << " " << -r + i;
    }
}