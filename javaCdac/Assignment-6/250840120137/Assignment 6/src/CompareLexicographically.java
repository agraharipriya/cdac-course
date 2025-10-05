
public class CompareLexicographically {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
	System.out.println("Enter String 1");
	String  str=ConsoleInput.getString();
	
	System.out.println("Enter String 2");
	String  str2=ConsoleInput.getString();
	int result=str.compareTo(str2);
	
	if(result==0) {
		System.out.println("Both Strings are equal");
	}else if(result<0) {
		System.out.println(str +" is less than "+ str2);
	}
	else {
		System.out.println(str +" is greater than " +str2);
	}

}
}