
public class AddEnteredValues {

	public static void main(String[] args) {
		System.out.println("Enter the number of integer values you wish to add ");
		int sum=0;
		int num=CalculatorInput.getInt();
		
		for(int iTemp=0;iTemp<num;iTemp++) {
			System.out.print("Enter the value :");
			int num1=CalculatorInput.getInt();
			sum +=num1;
			
		}
		System.out.println("Total of the above values :" +sum);

	
	}

}


//output:---
//Enter the number of integer values you wish to add 
//4
//Enter the value :22
//Enter the value :33
//Enter the value :44
//Enter the value :55
//Total of the above values :154