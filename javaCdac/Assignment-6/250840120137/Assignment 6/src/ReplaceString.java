
public class ReplaceString {
	public static void main(String args[]) {
			String str="The quick brown fox jumps over the lazy dog.";
		System.out.println("Original String : " +str);	
		String newString= str.replace("fox", "cat");
		System.out.println("New string : "+ newString);
	}
}
