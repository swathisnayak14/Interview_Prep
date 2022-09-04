// Input:candies:[2,3,5,1,3],extraCandies=3
// Output:[true,true,true,false,true]

// Explaination: Here candies[i] represents the number of candies that the i-th kid has

// For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have greatest number of candies among
// them.

#include <bits/stdc++.h>
using namespace std;

vector<bool> KidsWithCandies(vector<int> &v, int extraCandies)
{
    vector<bool> res;

    for (auto i : v)
    {
        if ((extraCandies + i) >= *max_element(v.begin(), v.end()))
        {
            res.push_back(true);
        }
        else
            res.push_back(false);
    }
    return res;
}

int main()
{
    vector<int> v{2, 3, 5, 1, 3};
    int extraCandies = 3;
    vector<bool> ans = KidsWithCandies(v, extraCandies);

    for(auto i=ans.begin();i!=ans.end();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}