//actual- a b c d e f g h i j k l m n o p q r s t u v w x y z
//cipher- f g h i j k l m n o p q r s t u v w x y z a b c d e

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,ans="";
    getline(cin,s);
    for(auto i:s)
    if(i<='u'){
        ans+=(i+5);
    }
    else{
        ans+=(i-'v'+'a');
    }
    cout<<ans;
    return 0;
}