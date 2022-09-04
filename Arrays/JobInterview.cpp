// Input:n=5,k=2,a[]={5,3,2,1,4}
// Output:2

// A job interview to hire candidates. A total of N candidates apply for the job ,you have to select K candidates for the interview from the total
// number of candidates.You can select K candidates acc to their academic scores. If all the candidates have the same score then call all the
// candidates for the interview.

#include <bits/stdc++.h>
using namespace std;

int jobInterview(int arr[], int n, int k)
{
    sort(arr, arr + n, greater<int>());
    int x = arr[k - 1]; // stores the k-1 element in the variable to check if all the other array elements have the same values.
    int count = 0;
    for (int i = k; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
        else
            break;
    }
    return count + k;
}

int main()
{
    int n;
    int k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << jobInterview(arr, n, k);
    return 0;
}