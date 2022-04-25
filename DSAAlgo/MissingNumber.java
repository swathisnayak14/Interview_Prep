// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

// https://leetcode.com/problems/missing-number/

// Example 1:

// Input: nums = [3,0,1]
// Output: 2
// Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
// Example 2:

// Input: nums = [0,1]
// Output: 2
// Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
// Example 3:

// Input: nums = [9,6,4,2,3,5,7,0,1]
// Output: 8
// Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
public class MissingNumber {
    public static void main(String[] args) {
        int[] arr={9,6,4,2,3,5,7,0,1};
       System.out.println(missing(arr));
    }

    public static int missing(int[] arr)
    {
        int i=0;
        while(i<arr.length)
        {
            int correctIndex=arr[i];//if index is 4 then the correct number for that index is 4
            if(arr[i]<arr.length && arr[i]!=arr[correctIndex])
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
            if(arr[index]!=index)
                return index;
        }   
        return arr.length; 
    }
    static void swap(int []arr,int first,int second)
    {
        int temp=arr[first];
        arr[first]=arr[second];
        arr[second]=temp;
    }
}
