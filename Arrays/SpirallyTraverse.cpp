// Given a matrix of size r*c. Traverse the matrix in spiral form.

// Example 1:

// Input:
// r = 4, c = 4
// matrix[][] = {{1, 2, 3, 4},
//            {5, 6, 7, 8},
//            {9, 10, 11, 12},
//            {13, 14, 15,16}}
// Output:
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
// Explanation:

// Example 2:

// Input:
// r = 3, c = 4
// matrix[][] = {{1, 2, 3, 4},
//            {5, 6, 7, 8},
//            {9, 10, 11, 12}}
// Output:
// 1 2 3 4 8 12 11 10 9 5 6 7
// Explanation:
// Applying same technique as shown above,
// output for the 2nd testcase will be
// 1 2 3 4 8 12 11 10 9 5 6 7.

#include <bits/stdc++.h>
using namespace std;
vector<int> spirallyTraverse(vector<vector<int> > A, int R, int C){
    vector<int> spiral;
    int left,right,top,bottom,size1=R*C,size2=0;
    top=0;
    bottom=R-1;
    left=0;
    right=C-1;

    while(size2<size1){
        for(int i=left;i<=right && size2<size1;i++){
            spiral.push_back(A[top][i]);
            size2++;
        }
        top++;

         for(int i=top;i<=bottom && size2<size1;i++){
            spiral.push_back(A[i][right]);
            size2++;
        }
        right--;

        for(int i=right;i>=left && size2<size1;i--){
            spiral.push_back(A[bottom][i]);
            size2++;
        }
        bottom--;

         for(int i=bottom;i>=top && size2<size1;i--){
            spiral.push_back(A[i][left]);
            size2++;
        }
        left++;
    }
    return spiral;

} 
int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> matrix(r);
    for (int i = 0; i < r; i++)
    {
        matrix[i].assign(c, 0);
        for (int j = 0; j < c; j++)
            cin >> matrix[i][j];
    }
    vector<int> result = spirallyTraverse(matrix, r, c);
    vector<int>::iterator itr;
    for (itr = result.begin(); itr!=result.end(); itr++)
        cout << *itr << " ";
    cout << endl;
    return 0;
}