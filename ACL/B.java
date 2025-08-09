import java.util.Scanner;

public class B{
    public static void main(String srgs[]){
        long a,b,c,d;
        Scanner sc = new Scanner(System.in);
        a = sc.nextLong();
        b = sc.nextLong();
        c = sc.nextLong();
        d = sc.nextLong();
        if(a <= c && c <= b){
            System.out.println("Yes");
        }
        else if(c <= a && a <= d)
            System.out.println("Yes");
        else{
            System.out.println("No");
        }
    }
}