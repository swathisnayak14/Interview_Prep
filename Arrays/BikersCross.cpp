// input: 5
//        0 1 0 1 1
// output: 5

// explaination:
// ( 0 1 _ _ _ )  (0 _ _ 1 _) (0_ _ 1 _)  (_ _ _ 0 1)  (_ _ 0 _ 1)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, sum = 0, count=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a)
            sum += count;
        else
            count++;    
    }
    cout << sum << endl;
    return 0;
}