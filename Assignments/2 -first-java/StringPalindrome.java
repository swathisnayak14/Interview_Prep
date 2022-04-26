import java.util.Scanner;

public class StringPalindrome {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String original,reversed="";
        original=sc.next();
        for(int i=original.length()-1;i>=0;i--)
        {
            reversed+=original.charAt(i);
        }
        if(original.toLowerCase().equals(reversed.toLowerCase()))
        {
            System.out.println("Palindrome");
        }
        else
        {
            System.out.println("Not a palindrome");
        }
    }
}
