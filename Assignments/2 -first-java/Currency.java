import java.util.Scanner;

public class Currency {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        double rupees;
        rupees=sc.nextDouble();
        double dollars=76.165;
        System.out.println(rupees/dollars);
    }
}
