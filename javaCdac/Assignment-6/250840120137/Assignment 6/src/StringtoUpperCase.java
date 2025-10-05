
public class StringtoUpperCase {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.print("Enter the String :");
        String str=ConsoleInput.getString();
        System.out.println("Original String : " +str);
        String upperCase=str.toUpperCase();
        System.out.println("String in Upper Case :" +upperCase);
	}

}
