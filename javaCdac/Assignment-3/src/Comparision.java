
public class Comparision {
	public static void main(String [] args) {
		System.out.print("Input the first number ");
		int num1=CalculatorInput.getInt();
		System.out.print("Input the second number:");
		int num2=CalculatorInput.getInt();
		System.out.print("Input the third number :");
		int num3=CalculatorInput.getInt();
		if(num1<num2 && num2<num3 ) {
			System.out.println("The result is: true");
		}
		else System.out.println("The result is: false");
	}

}

//--------------------output-----------------------
/*Input the first number 34
Input the second number:22
Input the third number :22
The result is: false

Input the first number 5
Input the second number:10
Input the third number :15
The result is: true */