
public class ReverseString {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.print("Enter the String : ");
		String str=ConsoleInput.getString();
		System.out.println("Original String : " +str);
	
		String reversed = "";

		for (int i =str.length() - 1; i >= 0; i--) {
		    reversed +=str.charAt(i);
		}

		System.out.println("The string in reverse order is :" +reversed);

		
	}

}
