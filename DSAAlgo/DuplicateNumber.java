// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

//https://leetcode.com/problems/find-the-duplicate-number/

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3

public class DuplicateNumber
{
    public static void main(String[] args) {
        int[] arr={3,1,3,4,2};
        System.out.println(duplicate(arr));
    }

    static int duplicate(int[] arr)
    {
        int i=0;
        while(i<arr.length)
        {
            if(arr[i]!=i+1)
            {
                int correctIndex=arr[i]-1;
                if(arr[i]!=arr[correctIndex])
                {
                    swap(arr,i,correctIndex);
                }
                else{
                    return arr[i];
                }
            }
           else{
               i++;
           }
        }
        return -1;
    }
    static void swap(int []arr,int first,int second)
    {
        int temp=arr[first];
        arr[first]=arr[second];
        arr[second]=temp;
    }
}