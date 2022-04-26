import java.util.Scanner;
public class HCFLCM {
    public static void main(String[] args) {
        int num1,num2,gcd=1,lcm=1;
        Scanner sc=new Scanner(System.in);
        num1=sc.nextInt();
        num2=sc.nextInt();
        int minimum=(num1>num2)?num1:num2;
        for(int i=1;i<=minimum;i++)
        {
            if(num1%i==0 && num2%i==0)
            {
                gcd=i;
            }
        }
        lcm=(num1*num2)/gcd;
        System.out.println("GCD is: "+gcd);
        System.out.println("LCM is: "+lcm);

    }
}
