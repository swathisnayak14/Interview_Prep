// *
// **
// ***
// ****
// ***
// **
// *

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rows,totalNumberCols;
    cin>>rows;
    for(int i=0;i<2*rows;i++)
    {
        if(i>rows)
        {
             totalNumberCols=2*rows-i;
        }
        else{
             totalNumberCols=i;
        }
        for(int j=0;j<totalNumberCols;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}