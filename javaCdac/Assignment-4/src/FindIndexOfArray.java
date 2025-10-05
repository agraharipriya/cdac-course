
public class FindIndexOfArray {
	static int findIndex(int[] array, int target) {
	    for (int i = 0; i < array.length; i++) {
	        
	        if (array[i] >= target) {
	            return i;
	        }
	    }
	    return array.length;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int array[]= {1,2,4,5,6};
		System.out.print("Enter value to search index :");
		int value=CalculatorInput.getInt();	
		int result=findIndex(array,value);
		System.out.println("Result :"+result);
	}

}

