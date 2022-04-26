import java.util.*;
public class InfiniteSum {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int sum=0;
        int n;
        while(sc.hasNextInt())
        {
            n=sc.nextInt();
            sum+=n;
        }
        System.out.println("The infinite sum is : " + sum);
    }
}
