public class AscDecArray {
	public static void main(String args[]) {

		System.out.println(" Enter the total numbers you wish to sort.");
		int number = CalculatorInput.getInt();
		int array[] = new int[number];
		for (int i = 0; i < number; i++) {
			System.out.print("Enter value:");
			array[i] = CalculatorInput.getInt();

		}
		System.out.print("Array : ");
		for (int i = 0; i < array.length; i++) {
			System.out.print(array[i] + " ");
		}
		System.out.println();

		int choice;
		do {

			System.out.println("1.Sort Array in Ascending order");
			System.out.println("2.Sort Array in Descending order");
			System.out.println("3.Exit");
			System.out.println("Enter your Choice.");
			choice = CalculatorInput.getInt();

			switch (choice) {
			case 1: {
				for (int i = 0; i < array.length - 1; i++) {
					int minIndex = i;
					for (int j = i + 1; j < array.length; j++) {
						if (array[j] < array[minIndex]) {
							minIndex = j;
						}
					}
					int temp = array[i];
					array[i] = array[minIndex];
					array[minIndex] = temp;
				}
				System.out.print("Sorted Array in  Ascending : ");
				for (int i = 0; i < array.length; i++) {
					System.out.print(array[i] + " ");
				}
				System.out.println();
			}

				break;
			case 2: {
				for (int i = 0; i < array.length - 1; i++) {
					int maxIndex = i;
					for (int j = i + 1; j < array.length; j++) {
						if (array[j] > array[maxIndex]) {
							maxIndex = j;
						}
					}
					int temp = array[i];
					array[i] = array[maxIndex];
					array[maxIndex] = temp;
				}

				System.out.print("Sorted Array in  Descending : ");
				for (int i = 0; i < array.length; i++) {
					System.out.print(array[i] + " ");
				}
				System.out.println();
			}

				break;

			default:
				System.out.println("Enter valid choice , exiting program!!");
				break;
			}

		} while (choice != 3);
	}
}

/*
 * //For ascending order for (int i = 0; i < arr.length - 1; i++) { int minIndex
 * = i; for (int j = i + 1; j < arr.length; j++) { if (arr[j] < arr[minIndex]) {
 * minIndex = j; } } // Swap arr[i] with the found minimum element int temp =
 * arr[i]; arr[i] = arr[minIndex]; arr[minIndex] = temp; }
 */