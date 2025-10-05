
public class Calculator {
	public static void main(String args[]) {

		int choice;
		do {
			System.out.println("1. Integer Number  Addition");
			System.out.println("2. Integer number Subtraction");
			System.out.println("3. Integer number Multiplication");
			System.out.println("4. Integer number Division");
			System.out.println("5. Float Number  Addition");
			System.out.println("6. Float number Subtraction");
			System.out.println("7. Float number Multiplication");
			System.out.println("8. Float number Division");
			System.out.println("9. Exit!!");
			
			//switch case 
			System.out.println("Enter your choice !!");
			 choice = CalculatorInput.getInt();
			switch (choice){
			case 1:{
				System.out.println("Enter two number :");
				int num1=CalculatorInput.getInt();
				int num2=CalculatorInput.getInt();
				int result=CalculatorMethods.add(num1, num2);	
				System.out.println("Addition of two number :" +result);
				}break;
			case 2:{
				System.out.println("Enter two number :");
				int num1=CalculatorInput.getInt();
				int num2=CalculatorInput.getInt();
				int result=CalculatorMethods.subtract(num1, num2);	
				System.out.println("Subtraction of two number :" +result);
				}break;
			case 3:{
				System.out.println("Enter two number :");
				int num1=CalculatorInput.getInt();
				int num2=CalculatorInput.getInt();
				int result=CalculatorMethods.multiply(num1, num2);	
				System.out.println("Multiplication of two number :" +result);
				}break;
			case 4:{
				System.out.println("Enter two number :");
				int num1=CalculatorInput.getInt();
				int num2=CalculatorInput.getInt();
				int result=CalculatorMethods.divide(num1, num2);	
				System.out.println("Division of two number :"+result);
				}break;
			case 5:{
				System.out.println("Enter two number :");
				float num1=CalculatorInput.getFloat();
				float num2=CalculatorInput.getFloat();
				float result=CalculatorMethods.add(num1, num2);	
				System.out.println("Addition of two number :" +result);
				}break;
			case 6:{
				System.out.println("Enter two number :");
				float num1=CalculatorInput.getFloat();
				float num2=CalculatorInput.getFloat();
				float result=CalculatorMethods.subtract(num1, num2);	
				System.out.println("Subtraction of two number :" +result);
				}break;
			case 7:{
				System.out.println("Enter two number :");
				float num1=CalculatorInput.getFloat();
				float num2=CalculatorInput.getFloat();
				float result=CalculatorMethods.multiply(num1, num2);	
				System.out.println("Multiplication of two number :" +result);
				}break;
			case 8:{
				System.out.println("Enter two number :");
				float num1=CalculatorInput.getFloat();
				float num2=CalculatorInput.getFloat();
				float result=CalculatorMethods.divide(num1, num2);	
				System.out.println("Division of two number :"+result);
				}break;
				default:
					System.out.println("Enter valid choice!!");
			}

		} while (choice!= 9);

	}
}



//-----------------------------------------------output-----------------------------
/*
 * 1. Integer Number  Addition
2. Integer number Subtraction
3. Integer number Multiplication
4. Integer number Division
5. Float Number  Addition
6. Float number Subtraction
7. Float number Multiplication
8. Float number Division
9. Exit!!
Enter your choice !!
1
Enter two number :
23
56
Addition of two number :79
1. Integer Number  Addition
2. Integer number Subtraction
3. Integer number Multiplication
4. Integer number Division
5. Float Number  Addition
6. Float number Subtraction
7. Float number Multiplication
8. Float number Division
9. Exit!!
Enter your choice !!
8
Enter two number :
3
0
Division by zero error
Division of two number :-1.0
1. Integer Number  Addition
2. Integer number Subtraction
3. Integer number Multiplication
4. Integer number Division
5. Float Number  Addition
6. Float number Subtraction
7. Float number Multiplication
8. Float number Division
9. Exit!!
Enter your choice !!
9
Enter valid choice!!

 * 
 * 
 * 
 * */


