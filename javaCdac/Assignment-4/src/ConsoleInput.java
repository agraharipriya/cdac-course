
public class ConsoleInput {

	public static void main(String[] args) {
		try {
			byte[] arrInput = new byte[100];
			System.out.println("Enter the name ");
			int length = System.in.read(arrInput);
			System.out.println("ArrayInput :" + new String(arrInput));
			System.out.println("Length :" + length);

			byte[] arrFinal = new byte[length - 2];
			System.arraycopy(arrInput, 0, arrFinal, 0, length - 2);
			String objString = new String(arrFinal);
			System.out.println(objString);
			System.out.println(arrFinal.length);

		 } catch (Exception e) {
			e.printStackTrace();
		}

	}

}
