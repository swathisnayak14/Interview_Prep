// package InfyTQJava;
import java.util.*;
public class IdentifyPalindrome {

    public static int reverse(int num){
        StringBuilder string=new StringBuilder(Integer.toString(num));
        string.reverse();
        return Integer.parseInt(string.toString());
    }

    public static boolean isPalidrome(int num){
        return num==reverse(num);
    }
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int num=s.nextInt();
        while (true){
            num=num+reverse(num);
            if(isPalidrome(num)){
                System.out.println(num);
                break;
            }
        }
    }
}
