import java.util.Scanner;

public class EvenOdd {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int input;
        input=sc.nextInt();
        checkOddEven(input);
    }

    static void checkOddEven(int input)
    {
        if(input%2==0)
        {
            System.out.println(input+ " is even");
        }
        else
        {
            System.out.println(input+ " is odd");
        }
    }
}
