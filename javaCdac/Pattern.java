import java.util.*;

public class Pattern {
    @SuppressWarnings("ConvertToTryWithResources")
    public static void main(String args []){
        Scanner sc=new Scanner(System.in); 
     
         System.out.println("Enter a number :" );
            int n =sc.nextInt();

         for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
            System.out.println("* ");
            System.out.println(j);
            }
         }
         System.out.println( " ");

         sc.close();
    }
}
