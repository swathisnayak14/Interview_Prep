//addition of the largest and the smallest letter of ASCII
//Swathi
//012345
//a=97 z=122;
//A=65 Z=90;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char str[50], smallest = 'z', largest = 'A';
    cin.getline(str, 50);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= largest && str[i] != ' ')
            largest = str[i];//w
        if (str[i] <= smallest && str[i] != ' ')
            smallest = str[i];//a
    }
    cout << (int)smallest + (int)largest;
    cout << smallest<<" "<<largest;
    return 0;
}