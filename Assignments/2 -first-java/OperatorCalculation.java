import java.util.Scanner;

public class OperatorCalculation {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num1,num2;
        num1=sc.nextInt();
        num2=sc.nextInt();
        char operator;
        operator=sc.next().trim().charAt(0);
        if(operator == '+' )
        {
            System.out.println("The sum is : "+(num1+num2));
        }
        else if(operator == '-')
        {
            System.out.println("The difference is : "+(num1-num2));

        }
        else if(operator == '*')
        {
            System.out.println("The product is : "+(num1*num2));

        }
        else if(operator =='/')
        {
            if(num2!=0)
            {
                System.out.println("The quotient is : "+(num1/num2));
            }
            else
            {
                System.out.println("Error");
            }
        }
        else
        {
            System.out.println("Operator is invalid");
        }
    }
}
