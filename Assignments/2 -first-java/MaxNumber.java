import java.util.Scanner;

public class MaxNumber {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num1,num2;
        num1=sc.nextInt();
        num2=sc.nextInt();
        System.out.println("The max of two is : "+maxOfTwo(num1,num2));
    }

    static int maxOfTwo(int num1,int num2)
    {
        if(num1>num2)
            return num1;
        return num2;
    }
}
