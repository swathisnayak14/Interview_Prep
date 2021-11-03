// The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.
// Note: There may be multiple possible solutions. Return any one of them. Any correct solution will result in an output of 1, whereas wrong solutions will result in an output of 0.

// Example 1:

// Input:
// N = 7
// A[] = {100,180,260,310,40,535,695}
// Output:
// 1
// Explanation:
// One possible solution is (0 3) (4 6)
// We can buy stock on day 0,
// and sell it on 3rd day, which will 
// give us maximum profit. Now, we buy 
// stock on day 4 and sell it on day 6.
// Example 2:

// Input:
// N = 5
// A[] = {4,2,2,2,4}
// Output:
// 1
// Explanation:
// There are multiple possible solutions.
// one of them is (3 4)
// We can buy stock on day 3,
// and sell it on 4th day, which will 
// give us maximum profit.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int> stockBuySell(vector<int> A,int N){
    int buy=0,sell=0,flag=0;
    vector<vector<int>> ans;
    for(int i=1;i<n;i++){
        if(A[i]>=A[i-1]&&a[i]!=A[buy]){
            sell++;
            flag=1;
        }
        else if(buy==sell){
            buy=i;
            sell=i;
        }
        else{
            vector<int> vec;
            vec.push_back(buy);
            vec.push_back(sell);
            ans.push_back(vec);

            buy=i;
            sell=i;
        }
    }
    if(flag==0)
        return 0;
    else if(buy!=N-1 && sell=n-1){
        vector<int> temp;
        temp.push_back(buy);
        temp.push_back(sell);
        ans.push_back(temp);
    }
    return ans;
}
int main(){
    
}