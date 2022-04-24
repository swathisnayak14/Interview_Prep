// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]
public class FirstAndLastPosition {
    public static void main(String args[])
    {
        int[] nums={5,7,7,8,8,10};
        int target=7;
        int[] ans=searchRange(nums,target);
        System.out.println(ans);
    }
    public static int[] searchRange(int[] nums, int target) 
    {
        int ans[]={-1,-1};
        ans[0]=search(nums,target,true);
        if(ans[0]!=-1){
            ans[1]=search(nums,target,false);
        }

        return ans;
    }
//returns the index value of the target
    static int search(int arr[],int target,boolean firstStartIndex)
    {
        int start=0;
        int end=arr.length-1;
        int answer=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;

            if(target<arr[mid])
            {
                end=mid-1;
            }
            else if(target>arr[mid])
            {
                start=mid+1;
            }
            else
            {
                answer=mid;
                if(firstStartIndex)
                {
                    end=mid-1;
                }
                else    
                    start=mid+1;
            }
        }
        return answer;
    }
}


// int main()
// {
//     int arr[]={2,3,5,9,14,16,18};
//     int target;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"Enter the target:"<<endl;
//     cin>>target;
//     cout<<"Answer is : "<<firstLastPos(arr,n,target);
//     return 0;
// }