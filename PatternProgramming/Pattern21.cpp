// 1*2*3*4
// 5*6*7*8
// 9*10*11*12
// 13*14*15*16

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            count++;
            if(j==n-1)
            {
                cout<<count;
            }
            else{
                cout<<count<<"*";
            }
        }
        cout<<endl;
    }
}