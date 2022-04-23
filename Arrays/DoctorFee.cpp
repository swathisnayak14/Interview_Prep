#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, age, totalIncome = 0, count = 0;
    do
    {
        cin >> age;
        if (age < 1 || age >= 120)
        {
            cout << "INVALID INPUT";
            return 0;
        }

        if (age < 17)
            totalIncome += 200;
        else if (age >= 17 && age < 40)
            totalIncome += 400;
        else
            totalIncome += 300;
        count++;
    } while ((cin.get() > '0' && cin.get() <= '120') && count <= 20);

    cout << "Total Income " << totalIncome << " INR";
    return 0;
}