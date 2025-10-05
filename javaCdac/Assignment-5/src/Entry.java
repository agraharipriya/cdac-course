
public class Entry {

	public static void main(String[] args) {
		EmployeeServices objEmployeeService = new EmployeeServices();
	
		System.out.println("Menu driven program for Employee. ");
		int choice;
		do {
			System.out.println("1.Add Employees");
			System.out.println("2.Display all Employees");
			System.out.println("3.Sort Employee");
			System.out.println("4.Exit");
			System.out.print("Enter you choice : ");

			choice = ConsoleInput.getInt();
			switch (choice) {
			case 1: {
				objEmployeeService.submenu();}
				break;

			case 2: {
				System.out.println(" All Details of the Employees:");
				objEmployeeService.displayAll();
			}
				break;

			case 3: {
				objEmployeeService.sortMenu();
			}
				break;

			case 4: {
				System.out.println("Exit");
			}
				break;

			default:
				System.out.println("Thanking you for Visiting !!");
				break;

			}

		} while (choice != 4);

	}

}
