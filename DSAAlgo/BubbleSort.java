import java.util.Arrays;

public class BubbleSort {
    public static void main(String[] args) {
        int[] arr={2,4,5,1,8,0};
        bubbleSort(arr);
        System.out.println(Arrays.toString(arr));
    }

    static void bubbleSort(int arr[])
    {
        boolean swapped;
        for(int i=0;i<arr.length;i++)
        {
            swapped=false; //if the array os already sorted then after the iteration of the i=0, the loop will break 
            for(int j=1;j<arr.length-i;j++)
            {
                if(arr[j]<arr[j-1])
                {
                   int temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                    swapped=true; //will be true when the entering the loop and items are swapped
                }
            }
            if(!swapped)
                break;
        }
    }
}
