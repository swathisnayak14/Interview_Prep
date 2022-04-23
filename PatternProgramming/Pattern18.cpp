//*******
// *****
//  ***
//   *

#include <bits/stdc++.h>
using namespace std;
int main() {
   int rows, i, j, space;
   cout<<"Enter the number of rows: ";
   cin>>rows;
   for (i = rows; i >= 1; --i) {
      for (space = 0; space < rows - i; ++space)
         cout<<"  ";
      for (j = 1; j <= 2 * i - 1; ++j)
         cout<<"* ";
      cout<<endl;
   }
   return 0;
}