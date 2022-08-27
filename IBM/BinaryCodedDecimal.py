# // Input:
# // 011000100000110100100000

# // Output:
# // 620
# // /
# // 20
# // If length of string is not multipl of 4 thrn print invalid input
# // operator +    -     *   /
# //         1010 1011 1100 1101

# // 0     1       2       3       4       5       6       7       8       9
# // 0000 0001     0010    0011    0011    0100   0110    0111   1000     1001

# // #include <bits/stdc++.h>
# // using namespace std;

# // void binarycoded(string str1)
# // {
# //     int length = str1.length();
# //     if (length % 4 != 0)
# //     {
# //         cout << "Invalid input";
# //         exit(0);
# //     }

# //     else
# //     {
# //         int arr[13]={'1','2','3','4','5','6','7','8','9','+','-','*','/'};
# //         for (int i = 0; i < length; i += 4)
# //         {
# //             string temp = (str1.substr(i, 4));//for getting 4 decimal numbers each
# //             // cout<<temp;
# //             int decNum=stoi(temp,0,2);
# //             cout<<decNum<<endl;

# //         }
# //     }
# // }

# // int main()
# // {
# //     string str1 = "011000100000110100100000";
# //     binarycoded(str1);
# //     return 0;
# // }
def binarycoded(str1):
    a=str1
    if len(a)%4!=0:
        print("Invalid Input")
    else:
        lst=['0','1','2','3','4','5','6','7','8','9','+','-','*','/']
        for i in range(0,len(a),+4):
            #slicing
            temp=a[i:i+4]
            #binary to decimal
            btd=int(temp,2)
            p=lst[btd]
            if p=="+" or p=="-" or p=="*" or p=="/":
                print()
                print(p)

            else:
                print(p,end="")
    
str1="011000100000110100100000"
binarycoded(str1)