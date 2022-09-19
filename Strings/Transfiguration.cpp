// Example 1:

// Input:
// A = "GEEKSFORGEEKS"
// B = "FORGEEKSGEEKS"
// Output: 3
// Explanation:The conversion can take place
// in 3 operations:
// 1. Pick 'R' and place it at the front,
//    A="RGEEKSFOGEEKS"
// 2. Pick 'O' and place it at the front,
//    A="ORGEEKSFGEEKS"
// 3. Pick 'F' and place it at the front,
//    A="FORGEEKSGEEKS"

#include <bits/stdc++.h>
using namespace std;

int tranfiguration(string A, string B)
{
    int sum = 0;
    for (int i = 0; i < A.length(); i++)
    {
        sum += A[i]; // we are adding a particular character to the sum
        sum -= B[i]; // here we delete that character and at last if we obtain a 0 we can say that we can convert A to B as all the characters needed are present.
    }

    if (sum != 0)
    {
        return -1;
    }

    int i = A.length();
    int j = B.length();
    int count = 0;
    while (i >= 0 && j >= 0)
    {
        if (A[i] != B[j])
        {
            count++; // we count how many times its not equal and return that value.
            i--;
        }
        else
        {
            // its its equal
            i--;
            j--;
        }
    }
    return count;
}

int main()
{
    string A = "GEEKSFORGEEKS";
    string B = "FORGEEKSGEEKS";
    cout << tranfiguration(A, B);
    return 0;
}