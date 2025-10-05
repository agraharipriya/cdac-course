public class Pallindrome {
    public static void main(String args[]){
        System.out.print("Enter the number :");
        int num=CalculatorInput.getInt();
        int reverse=0;
        int original=num;
        while(num>0){
            reverse=reverse*10+ num%10;
            num =num/10;
        }

        
        System.out.println(original +" - is pallindrome " + (reverse==original));
    }
}
