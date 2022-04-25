// Given an unsorted integer array nums, return the smallest missing positive integer.

// You must implement an algorithm that runs in O(n) time and uses constant extra space.

// https://leetcode.com/problems/first-missing-positive/

// Example 1:

// Input: nums = [1,2,0]
// Output: 3
// Example 2:

// Input: nums = [3,4,-1,1]
// Output: 2
// Example 3:

// Input: nums = [7,8,9,11,12]
// Output: 1

public class FirstMissingPositive {
    public static void main(String[] args) {
        int[] arr={3,4,-1,1};
       System.out.println(firstMissing(arr));
    }

    public static int firstMissing(int[] arr)
    {
        int i=0;
        while(i<arr.length)
        {
            int correctIndex=arr[i]-1;//if index is 4 then the correct number for that index is 4
            if(arr[i]>0 && arr[i]<=arr.length && arr[i]!=arr[correctIndex])
            {
                swap(arr,i,correctIndex);
            }
            else{
                i++;
            }
        }
        //searching if the elements are in its correct index

        for(int index=0;index<arr.length;index++)
        {
            if(arr[index]!=index+1)
                return index+1;
        }   
        return arr.length+1; 
    }
    static void swap(int []arr,int first,int second)
    {
        int temp=arr[first];
        arr[first]=arr[second];
        arr[second]=temp;
    }
}
