// Given a string s, you can transform every letter individually to be lowercase or uppercase to create another string.

// Return a list of all possible strings we could create. Return the output in any order.

// Example 1:

// Input: s = "a1b2"
// Output: ["a1b2","a1B2","A1b2","A1B2"]
// Example 2:

// Input: s = "3z4"
// Output: ["3z4","3Z4"]

#include <bits/stdc++.h>
using namespace std;
vector<string> output;
vector<string> letterCasePermutation(string str)
{
    
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    output.push_back(str);

    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            add(toupper(str[i]), i); // we create a function and pass the latter to change in the given string in the output. So whatever string is present in the output
                                     //  vector for all those the corresponding letter is changed.
        }
    }
    return output;
}

void add(char n,int pos)
{
    int count=1;//put this as a global variable
    int i=0;
    while(i<count)//count tells the number of strings present in the output vector
    {
        string x=output[i];
        x[pos]=n;
        output.push_back(x);
        i++;//goes to change the next string in the output vector
    }
    count+=count;//at first the count was 1, next ot becomes 2 and then 4 as we will have 2 strings to modify and so 2 more strings will be added.
}

int main()
{
    string str = "a1b2";
    vector<string> ans = letterCasePermutation(str);
    return 0;
}