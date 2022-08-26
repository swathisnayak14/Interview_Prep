// Given
// Adhaar number(string)
// Date of birth(string)
// Presence of any disease(string)

// The goal is to put under the 1st or 2,d or 3rd vaccination drive

// Conditions
// 1.Above age 60 -1st drive
// 2.Any disease,irrespective of age-1st drive
// 3.above age 45-2nd drive
// 4.Above age 30 -3rd drive

// Input:
// 1234 5678 9989
// 13/05/1952
// no

// Output:
// 1

#include <bits/stdc++.h>
using namespace std;

int vaccinationDrive(string adhaarNum, string dob, string presenceOfDisease)
{
    int lengthOfAdhaar = adhaarNum.size();
    int lengthOfDOB = dob.size();
    if (lengthOfAdhaar != 14 || lengthOfDOB != 10)
    {
        cout << "Invalid input\n";
        exit(0);
    }

    else
    {
        int age = 2022 - (stoi(dob.substr(6)));
        if (age > 60 || presenceOfDisease == "yes")
        {
            return 1;
        }

        else if (age > 45)
        {
            return 2;
        }
        else if (age > 30)
        {
            return 3;
        }
    }
    return 0;
}

int main()
{
    string adhaarNum, dob, presenceOfDisease;
    
    cout << vaccinationDrive("1234 5678 9781","12/05/1972", "yes");
    return 0;
}