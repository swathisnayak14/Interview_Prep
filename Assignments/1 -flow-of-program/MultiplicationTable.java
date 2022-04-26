import java.util.*;
public class MultiplicationTable {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int tableNumber=sc.nextInt();
        tableMultiplicationOf(tableNumber);
    }

    static void tableMultiplicationOf(int tableNumber)
    {
        for(int i=1;i<=10;i++)
        {
            System.out.println(tableNumber + " * "+i+" = "+tableNumber*i);
        }
    }
}
