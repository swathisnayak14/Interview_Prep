// Input:153
// Ouput:Yes

// Explaination: square(1)+square(5)+sqaure(3)=153
//               153=153 ,so its armstrong number

// now calculate armstrong numbers between 100 nad 500

#include <bits/stdc++.h>
using namespace std;

void armstrong(int low, int high)
{
    for (int i = low; i <= high; i++)
    {
        int temp = i, count = 0;
        int sum = 0;
        while (temp != 0)
        {
            temp /= 10;
            count++;
        }
        temp = i;
        while (temp != 0)
        {
            int rem = temp % 10;
            sum = sum + pow(rem, count);
            temp /= 10;
        }

        if (sum == i)
        {
            cout << i << " ";
        }
        count=0;
        sum=0;
    }
}
int main()
{
    int low = 100, high = 500;
    armstrong(low, high);
    return 0;
}