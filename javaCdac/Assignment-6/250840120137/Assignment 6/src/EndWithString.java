
public class EndWithString {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Enter String ");
		String  str=ConsoleInput.getString();
		
		System.out.println("Enter another string to compare ");
		String str1=ConsoleInput.getString();
		
	boolean result=str.endsWith(str1); 
		if(result) {
			System.out.println("\"" +str +"\"" + " end with "+"\""+str1  +"\""+" ? "+result);
		}else {
			System.out.println("\"" +str +"\"" + " end with "+"\""+str1  +"\""+" ? "+result);
		}
	}

}
