import java.util.ArrayList;
import java.util.List;

// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

// Example 1:

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [5,6]
// Example 2:

// Input: nums = [1,1]
// Output: [2]

public class AllElementsDuplicates {
    public static void main(String[] args) {
        int[] arr={4,3,2,7,8,2,3,1,8,7};
        System.out.println(cyclic(arr));
    }

    public static List<Integer> cyclic(int[] arr)
    {
        int i=0;
        while(i<arr.length)
        {
            int correctIndex=arr[i]-1;
            if(arr[i]!=arr[correctIndex])
            {
                swap(arr,i,correctIndex);
            }
            else{
                i++;
            }
        }
       List<Integer> ans=new ArrayList<>();
       for(int index=0;index<arr.length;index++)
       {
           if(arr[index]!=index+1)
           {
               ans.add(arr[index]);
           }
       }
       return ans;
    }
    static void swap(int []arr,int first,int second)
    {
        int temp=arr[first];
        arr[first]=arr[second];
        arr[second]=temp;
    }
    
}
