// One programming language has the following keywords that cannot be used as identifiers:

// break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var

// Write a program to find if the given word is a keyword or not

// Test cases
// Case 1
// Input – defer
// Expected Output – defer is a keyword
// Case 2
// Input – While
// Expected Output – while is not a keyword

#include<bits/stdc++.h>
using namespace std;
int main(){
     char str[16][16]={"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range"," return"," struct", "type", "var"};
     char a[20];
     int flag=0;
     cin>>a;
     for(int i=0;i<16;i++){
         if(strcmp(a,str[i])==0){
            flag=1;
            break;
         }
     }
     if(flag==1)
        cout<<a<< " is a keyword";
    else
    cout<<a<<" is not a keyword";
    return 0;
}