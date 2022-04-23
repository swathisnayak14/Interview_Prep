// Accept The Total Number Of Participants (P) In Class A. A Group Of 4 Is To Be Created From Registered Participants i.e., Group A, Group B, Group C And Group D. The Limit Is 200.

// Your Task Is To Create Above 4 Groups With The Following Conditions:

// 🗯 If Total Number Of Participants Is Even Then, Criteria For Group Division Is That, Each Group Should Be Having Equal Number Of Total Number Of Participants In Each Of The Groups.
// 	For Example : If P = 104,
// 		      Then Group A = 26, Group B = 26, Group C = 26 And Group D = 26.

// 🗯 If Total Number Of Participants Is Odd Then, Criteria For Griup Division Is That, The Nearest Multiple Less Than P And Perform Four Equal DivisionAnd Left Out Participants Are Added Into Group D.
// 	For Example : If P = 127,
// 		      Then Group A = 31, Group B = 31, Group C = 31 And Group D = 34. (Group D Will Be Having The Left Out One's To i.e., 31 + 3 = 34)

// ⚫ Constraints : 100 <= P <= 200

// ⚫ Note : For Any Other Input Print "INVALID INPUT!"
//  Example 1 :

// Input : 104

// Output :

// Group A : 26
// Group B : 26
// Group C : 26
// Group D: 26

//  Example 2 :

// Input : 127

// Output :

// Group A : 31
// Group B : 31
// Group C : 31
// Group D: 34

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int P;
    int i = 0, a[4];
    cin >> P;
    if (P >= 100 && P <= 200)
    {
        if (P % 2 == 0)
        {
            while (i < 4)
            {
                a[i] = P / 4;
                i++;
            }
        }
        else
        {
            int n = P % 4;
            while (i < 4)
            {
                a[i] = P / 4;
                i++;
            }
            a[3] = a[3] + n;
        }
        for (i = 0; i < 4; i++)
            cout << a[i] << endl;
    }

    else
        cout << "INVALID INPUT";
    return 0;
}