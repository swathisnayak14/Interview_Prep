//* * * *
//  * * * *
//    * * * *
//      * * * *

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    for(int i=0;i<rows;i++)
    {
        for(int space=0;space<i;space++)
        {
            cout<<"  ";
        }
        for(int star=0;star<rows;star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}