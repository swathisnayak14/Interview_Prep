// cost to garden per 100mt sq. Calculate the remaining space for the garden after the constructing of the house. Then for the remaining
// space calculate the cost of gardening.

#include <bits/stdc++.h>
using namespace std;

int calCost(int sizeOfLand, int lengthOfHouse, int breadthOfHouse, int costOfGardening)
{
    if (sizeOfLand <= 0 || lengthOfHouse <= 0 || breadthOfHouse <= 0 || costOfGardening <= 0 || lengthOfHouse > sizeOfLand || breadthOfHouse > sizeOfLand)
    {
        cout << "Invalid Input\n";
        exit(0);
    }
    else
    {
        int totalSizeOfLand = sizeOfLand * sizeOfLand;
        int totalSizeOfHouse = lengthOfHouse * breadthOfHouse;

        int totalLeft = totalSizeOfLand - totalSizeOfHouse;
        int totalcostOfGardening = (totalLeft * costOfGardening) / 100;
        return totalcostOfGardening;
    }
}

int main()
{
    int sizeOfLand, lengthOfHouse, breadthOfHouse, costOfGardening;
    cin >> sizeOfLand >> lengthOfHouse >> breadthOfHouse >> costOfGardening;
    cout << calCost(sizeOfLand, lengthOfHouse, breadthOfHouse, costOfGardening);
    return 0;
}