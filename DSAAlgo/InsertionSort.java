import java.util.Arrays;

public class InsertionSort {
    public static void main(String[] args) {
        int[] arr={4,5,-1,0,23,1,2,3};
        insertion(arr);
        System.out.println(Arrays.toString(arr));
    }

    static void swap(int arr[],int first,int end)
    {
        int temp=arr[first];
        arr[first]=arr[end];
        arr[end]=temp;
    }
    
    static void insertion(int arr[])
    {
        for(int i=0;i<arr.length-1;i++)
        {
            for(int j=i+1;j>0;j--)
            {
                if(arr[j]<arr[j-1])
                {
                    swap(arr,j,j-1);
                }
                else{
                    break;
                }
            }
        }
    }
}
