import java.util.Scanner;

public class Fibonacci {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n;
        n=sc.nextInt();
        fibonacci(n);
    }

    static void fibonacci(int n)
    {
        int firstTerm=0, secondTerm=1;
        for(int i=1;i<=n;i++)
        {
            System.out.print(firstTerm + " ");
            int nextTerm=firstTerm+secondTerm;
            firstTerm=secondTerm;
            secondTerm=nextTerm;
        }
       
    }
}
