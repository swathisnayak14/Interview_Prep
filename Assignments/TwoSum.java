import java.util.Scanner;

import java.util.Scanner;
public class TwoSum {
    public static void main(String[] args) {
        int num1,num2;
        Scanner sc=new Scanner(System.in);
        num1=sc.nextInt();
        num2=sc.nextInt();
        System.out.println("The sum is: " +sum(num1,num2));
    }

    static int sum(int num1,int num2)
    {
        int add=num1+num2;
        return add;
    }
}
