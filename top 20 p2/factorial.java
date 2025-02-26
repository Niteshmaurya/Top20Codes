import java.util.Scanner;

public class factorial {

    public static void main(String[] args) {
        System.out.println("Enter the value of n");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans = Fact(n);
        System.out.println("fact is "+ans);    
    }
    public static int Fact(int n){
        if(n ==0 || n ==1)   
        return n;
        else{
          return  n*Fact(n-1) ;
        }
    }
}