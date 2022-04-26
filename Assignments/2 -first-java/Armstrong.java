import java.util.Scanner;

public class Armstrong {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int startRange,endRange;
        startRange=sc.nextInt();
        endRange=sc.nextInt();
        for(int i=startRange;i<=endRange;i++)
        {
            if(armstrong(i))
            {
                System.out.print(i+" ");
            }
        }
    }

    static boolean armstrong(int n)
    {
        int temp=n,total=0;
        while(n>0)
        {
            int rem=n%10;
            total+=rem*rem*rem;
            n/=10;
        }
        if(temp==total)
            return true;
        return false;
    }
}
