# // The aim is to find the magic number from the given list of numbers

# // Rules
# // 1.If it is a three digit number
# // 2. It will be in the ith position when the given three digit numver is arranged in the ascending order

# // Input:
# // 8
# // 550 67 45 820 717 3 90 636
# // #include <bits/stdc++.h>
# // using namespace std;

# // void magicNumber(int arr[], int m, int n)
# // {
# //     int count = 0;
# //     vector<int> array;
# //     for (int i = 0; i < n; i++)
# //     {
# //         int n = arr[i];
# //         while (n != 0)
# //         {
# //             count++;
# //             n /= 10;
# //             if (count == 3)
# //             {
# //                 array.push_back(arr[i]);
# //             }
# //         }
# //     }
# //         for (auto i = array.begin(); i != array.end(); i++)
# //         {
# //             cout << *i << " ";
# //         }
# //     // sort(array.begin(), array.end());
# //     // int ans = array[m - 1];
# //     // return ans;
# // }
# // int main()
# // {
# //     int n, m;
# //     cin >> n;
# //     int arr[n];
# //     for (int i = 0; i < n; i++)
# //     {
# //         cin >> arr[i];
# //     }
# //     cin >> m;
# //     magicNumber(arr, m, n);
# //     return 0;
# // }

def MagicNumber(a,n):
    ans=[]
    for i in a:
        if len(str(i))==3:
            ans.append(i)
    ans.sort()
    print(ans[n-1])

m=int(input())
a=[0]*m
for i in range(m):
    a[i]=int(input())
n=int(input())

MagicNumber(a,n)