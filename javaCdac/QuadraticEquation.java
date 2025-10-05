import java.util.*;
public class QuadraticEquation {

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int a,b,c;
            double r1,r2;
            System.err.println("Enter values a, b,c : ");
            a=sc.nextInt();
            b=sc.nextInt();
            c=sc.nextInt();
            r1=(-b + Math.sqrt((Math.pow(b,2))-(4*a*c)))/2*a;
            r2=(-b + Math.sqrt((Math.pow(b,2))-(4*a*c)))/2*a;
            System.err.println("roots of expression is :" + r1 +","+r2);
        }
    }
    
}
