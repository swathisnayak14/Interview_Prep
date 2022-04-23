//Program to check if a year is Leap Year or not

#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cin>>year;
    if(((year%4==0)&&(year%100!=0))||year%400==0)
        cout<<year<<" IS A LEAP YEAR";
    else
        cout<<year<<" IS NOT A LEAP YEAR";

    // (n%4==0)?cout<<"leap year":cout<<"not leap year";
    return 0;
}