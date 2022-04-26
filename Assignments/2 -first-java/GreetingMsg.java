import java.util.Scanner;
public class GreetingMsg {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String name;
        name=sc.next();
        greeting(name);
    }

        static void greeting(String name)
        {
            System.out.println("Hello "+name);
        }
}
