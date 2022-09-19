// Given a string S containing lowercase english alphabet characters. The task is to calculate the number of distinct strings that can be
// obtained after performing exactly one swap.
// In one swap,Geek can pick two distinct index i and j (i.e 1 < i < j < |S| ) of the string, then swap the characters at the position i
// and j.

// Example 1:

// Input:
// S = "geek"
// Output:
// 6
// Explanation:
// After one swap, There are only 6 distinct strings
// possible.(i.e "egek","eegk","geek","geke","gkee" and
// "keeg")

#include <bits/stdc++.h>
using namespace std;

long long exactlyOneSwap(string s)
{
    vector<long long> count(26, 0);
    long long ans=0;
    long long n = s.size();
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++; // here count[s[0]-'a']=count['g'-'a'] in this place value will be inceremented
    }
    bool flag = false;
    ans = n * (n - 1) / 2; // if no character are repeating, say for s=abc, no characters are repeating so our answer will be (3*2)/2=3 
                           //ie:cab,cba, bac
    for (int i = 0; i < 26; i++)     // when character are repeating
    {

        // here e is repeating e=2,so whatever is repeating we subtract it from the answer. eg:aabc has 2 times a repeating, so 2 times
        // aabc will be repeated that shouldnot happen so we do n*(n-1)/2 as subtracy those many from the resultant answer.
        if (count[i] > 1)
            flag = true;                     // at last that one should be added to include that onw string
        ans -= count[i] * (count[i] - 1) / 2; // say count of e is 2 so 2*(2-1)/2=1 time extra repeation of geek but at the last we need
        // to add that one occurance of geek aslo so we add a 1 to it.
    }
    return flag ? ans + 1 : ans; // if flag is true,return ans+1 else ans
}

int main()
{
    string s = "geek";
    cout << exactlyOneSwap(s);
    return 0;
}