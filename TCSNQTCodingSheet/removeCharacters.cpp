// Example 1:
// Input: string str = "take12% *&u ^$#forward"
// Output: takeuforward
// Explanation:
// Characters 1,2,%,*,&,^,$,# along with whitespaces are 
// removed but the order of remaining alphabets is preserved.

// Example 2:
// Input: String str = "1.Python & 2.Java"
// Output: PythonJava
// Explanation: 
// Characters 1.&2. along with whitespaces are removed 
// but the order of remaining alphabets is preserved.

#include<bits/stdc++.h>
using namespace std;

string removeCharacters(string str,int n)
{
    string ans;
    for(int i=0;i<n;i++)
    {
        int ascii=(int)str[i];
        if((ascii>=65 && ascii<=90)||(ascii>=97 && ascii<=122))
            ans.push_back(str[i]);
    }
    return ans;
}
int main() {
  string str = "take12% *&u ^$#forward";
  int n = str.length();
  cout << removeCharacters(str, n);
  return 0;
}