
public class CharAtIndex {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		System.out.println("Enter String to get the character: ");
		String  str=ConsoleInput.getString();
		System.out.println("Enter Index to search : ");
		int enterCharacter=ConsoleInput.getInt();
		if(enterCharacter<str.length()) {
			System.out.println("Character at Position "+enterCharacter +"  is : "+str.charAt(enterCharacter));
		}
		else {
			System.out.println("Wrong index entered.");
		}
		
		
		
	}

}
