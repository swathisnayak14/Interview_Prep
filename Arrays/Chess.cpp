#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char c;
    cin >> n;
    cin >> c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 0)
                cout << c << " ";
            else
                cout << "B ";
        }
        cout<<"\n";
    }
    return 0;
}
