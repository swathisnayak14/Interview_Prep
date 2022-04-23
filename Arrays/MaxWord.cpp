// input- knowledge is power
// output-9 (knowledge)

// input:123@#$%rathajjdj 89 00 erfhdj
// output: 16 (123@#$%rathajjdj)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s); // getline is used so that if a sentence has spaces in it,
                     // it takes in the whole sentence unlike only cin>>s takes a word until space is encountered.
    istringstream ss(s); //breaks the sentences into words and stores and can be individually accessed at the time of calculation
    int m = 0; // maximum=0
    while (ss)
    {
        string w;
        ss >> w; // takes the first word in and runs until it encounters space
        if (w == " ")
            break;
        m = max(m, (int)w.length());
    }
    cout<<m;
    return 0;
}