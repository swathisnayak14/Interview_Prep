// CRICKET QUESTION
// There’s a new cricket format where each score is counted only once. The
// batsman can score anywhere from 0 to 150 runs in a single ball. For
// instance, if a batsman scores 6 twice, it should be counted only once.
// Given the scores of a batsman, find the runs scored by him which are valid.
// Sample Input:
// 8
// 6,6,4,4,0,0,25,6,25,4
// Sample Output:
// 35
#include<bits/stdc++.h>
using namespace std;

int countOnlyOnce(int n,int *arr)
{
    set<int>s;
    int sum=0;
    for(int i=0;i<n;i++)    
        s.insert(arr[i]);
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        sum+=*it;
    }
    return sum;
}

int main()
{
    int arr[10]={6,6,4,4,0,0,25,6,25,4};
    cout<<countOnlyOnce(10,arr);
    return 0;
}