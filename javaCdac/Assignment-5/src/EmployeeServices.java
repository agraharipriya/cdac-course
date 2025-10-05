
public class EmployeeServices {

	Employee emp_arr[] = new Employee[100];
	int emp_count = 0;

	public void addEmployee(int totalEmployee, int emp_type) {

		for (int iTemp = 0; iTemp < totalEmployee; iTemp++) {

			System.out.println("Enter the details for employee :" + (emp_count + 1));
			System.out.print("Enter Name : ");
			String name = ConsoleInput.getString();
			System.out.print("Enter Address : ");
			String address = ConsoleInput.getString();
			System.out.print("Enter Age : ");
			int age = ConsoleInput.getInt();
			System.out.print("Enter Gender: (true for Male and false for Female :");
			boolean gender = ConsoleInput.getBoolean();
			System.out.print("Enter Basic Salary : ");
			float basic_salary = ConsoleInput.getFloat();

			switch (emp_type) {
			case 1: {
				System.out.print("Enter HRA : ");
				float HRA = ConsoleInput.getFloat();
				Manager objManager = new Manager(name, address, age, gender, basic_salary, HRA);
				emp_arr[emp_count++] = objManager;

			}
				break;
			case 2: {
				System.out.print("Enter Over Time : ");
				float over_time = ConsoleInput.getFloat();
				Engineer objEngineer = new Engineer(name, address, age, gender, basic_salary, over_time);
				emp_arr[emp_count++] = objEngineer;
			}
				break;
			case 3: {
				System.out.print("Enter commission : ");
				float commission = ConsoleInput.getFloat();

				Salesman objSalesman = new Salesman(name, address, age, gender, basic_salary, commission);

				emp_arr[emp_count++] = objSalesman;
			}
				break;

			}
		}
	}

	public void submenu() {
		System.out.println("Enter choice to Add  Employees ");
		int add_choice;
		do {
			System.out.println("1.Add Manager.");
			System.out.println("2.Add Engineer");
			System.out.println("3.Add Salesman");
			System.out.println("4.Exit");
			System.out.print("Enter your choice to add : ");
			add_choice = ConsoleInput.getInt();
			switch (add_choice) {
			case 1: {
				System.out.print("Enter  Number of employee you want to add : ");
				int emp_num = ConsoleInput.getInt();
				addEmployee(emp_num, 1);
				System.out.println("Manager Added successfully !!");

			}
				break;
			case 2: {
				System.out.print("Enter  Number of employee you want to add : ");
				int emp_num = ConsoleInput.getInt();
				addEmployee(emp_num, 2);
				System.out.println("Engineer Added SuccessFully !!");
			}
				break;

			case 3: {
				System.out.print("Enter  Number of employee you want to add : ");
				int emp_num = ConsoleInput.getInt();
				addEmployee(emp_num, 3);
				System.out.println("Salesman Added Successfully !!");
			}
				break;
			case 4: {
				System.out.println("Exit");
			}
				break;
			default:
				System.out.println("Invalid Choice");
				break;
			}

		} while (add_choice != 4);
	}

	public void displayAll() {
		if (emp_count == 0) {
			System.out.println("No Employee Found !!");
			return;
		}
		for (int iTemp = 0; iTemp < emp_count; iTemp++) {
			System.out.println("Employee " + (iTemp + 1) + ":");
			emp_arr[iTemp].display();
			System.out.println("-------------------------------------------------------------------------");
		}

	}

	// Ascending (A → Z)
	public void sortNameAscending() {
		for (int iTemp = 0; iTemp < emp_count - 1; iTemp++) {
			for (int j = 0; j < emp_count - iTemp - 1; j++) {
				if (emp_arr[j].getName().compareTo(emp_arr[j + 1].getName()) > 0) {
					Employee temp = emp_arr[j];
					emp_arr[j] = emp_arr[j + 1];
					emp_arr[j + 1] = temp;
				} else if (emp_arr[j].getName().compareTo(emp_arr[j + 1].getName()) < 0) {
					Employee temp = emp_arr[j];
					emp_arr[j] = emp_arr[j + 1];
					emp_arr[j + 1] = temp;
				}
			}
		}
		System.out.println("Employees sorted by Name (Ascending A–Z):");
		displayAll();
	}

	// Descending (Z → A)
	public void sortNameDescending() {
		for (int iTemp = 0; iTemp < emp_count - 1; iTemp++) {
			for (int j = 0; j < emp_count - iTemp - 1; j++) {
				if (emp_arr[j].getName().compareTo(emp_arr[j + 1].getName()) < 0) {
					Employee temp = emp_arr[j];
					emp_arr[j] = emp_arr[j + 1];
					emp_arr[j + 1] = temp;
				}
			}
		}
		System.out.println("Employees sorted by Name (Descending Z–A):");
		displayAll();
	}

	public void sortMenu() {
		int sort_choice;
		System.out.println("Employees details by sorting by name and designation .");
		do {
			System.out.println("1.Sort the Employee by Name");
			System.out.println("2.Sort the Employee by Designation.");
			System.out.println("3.Exit");
			System.out.print("Enter the choice You want to sort the Employees.");
			sort_choice = ConsoleInput.getInt();

			switch (sort_choice) {
			case 1: {

				int emp_sort_choice;
				do {
					System.out.println("1.Sorting Employees in Ascending Order");
					System.out.println("2.Sorting Employees in Descending Order");
					System.out.println("3.Exit");
					System.out.print("Enter the choice for Sorting the employees by Ascending and descending : ");
					emp_sort_choice = ConsoleInput.getInt();

					switch (emp_sort_choice) {
					case 1: {
						sortNameAscending();
					}
						break;
					case 2: {
						sortNameDescending();
					}
						break;
					case 3: {
						System.out.println("Exit");
					}
						break;
					}
				} while (emp_sort_choice != 3);
			}
				break;

			case 2: {

				sortByDesignation();
			}
				break;
			case 3: {
				System.out.println("Exit");
			}
				break;
			default:
				System.out.println("Invalid choice !! ");
				break;
			}
		} while (sort_choice != 3);
	}

	// sort by designation method
	public void sortByDesignation() {

		for (int i = 0; i < emp_count; i++) {
			if (emp_arr[i] instanceof Manager) {
				System.out.println("---- Manager ----");
				emp_arr[i].display();
			}
		}

		for (int i = 0; i < emp_count; i++) {
			if (emp_arr[i] instanceof Engineer) {
				System.out.println("---- Engineer ----");
				emp_arr[i].display();
			}
		}
		for (int i = 0; i < emp_count; i++) {
			if (emp_arr[i] instanceof Salesman) {
				System.out.println("---- Salesman ----");
				emp_arr[i].display();
			}
		}
	}

}
