
public class CalculatorMethods {
	public static int add(int num1, int num2) {
		return num1 + num2;
	}

	public static int subtract(int num1, int num2) {
		return num1 - num2;
	}

	public static int multiply(int num1, int num2) {
		return num1 * num2;
	}

	public static int divide(int num1, int num2) {
		if (num2 == 0) {

			System.out.println("Division by zero error");
			return -1;
		} else
			return num1 / num2;
	}

	public static float add(float num1, float num2) {
		return num1 + num2;
	}

	public static float subtract(float num1, float num2) {
		return num1 - num2;
	}

	public static float multiply(float num1, float num2) {
		return num1 * num2;
	}

	public static float divide(float num1, float num2) {
		if (num2 == 0) {
			System.out.println("Division by zero error");

			return -1;
		} else
			return num1 / num2;
	}
}
