package InfyTQJava;
import java.util.*;
public class ZeroMatrix{
    public static int[][] setZero(int arr[][],int n){
        boolean[] zeroRows=new boolean[n];
        boolean[] zeroCol=new boolean[n];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==0){
                    zeroRows[i]=true;
                    zeroCol[j]=true;
                }
            }
        }

        for(int i=0;i<n;i++){
            if(zeroRows[i]){
                for(int col=0;col<n;col++){
                    arr[i][col]=0;
                }
            }
        }

        for(int i=0;i<n;i++){
            if(zeroCol[i]){
                for(int rows=0;rows<n;rows++){
                    arr[rows][i]=0;
                }
            }
        }
        return arr;
    }
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a[][]=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=s.nextInt();
            }
        }
        int ans[][]=setZero(a,n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(ans[i][j] + " ");
            }
            System.out.println();
        }
        
    }
}