// ****
// *  *
// *  *
// ****

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rows,count=0;
    cin>>rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows;j++){
            if(i==rows-1||i==0||j==rows-1||j==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}