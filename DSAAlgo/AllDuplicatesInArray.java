import java.util.ArrayList;
import java.util.List;

// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

// You must write an algorithm that runs in O(n) time and uses only constant extra space.

//https://leetcode.com/problems/find-all-duplicates-in-an-array/

// Example 1:

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]
// Example 2:

// Input: nums = [1,1,2]
// Output: [1]
// Example 3:

// Input: nums = [1]
// Output: []

public class AllDuplicatesInArray {
    public static void main(String[] args) {
        int[] arr={4,3,2,7,8,2,3,1};
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
               ans.add(index+1);
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
