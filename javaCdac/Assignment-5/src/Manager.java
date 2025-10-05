
public class Manager extends Employee {
	protected float HRA;

	Manager(String name, String address, int age, boolean gender, float basic_salary, float HRA) {
		super(name, address, age, gender, basic_salary);
		this.HRA = HRA;

	}

	public float getHRA() {
		return HRA;
	}

	public void setHRA(float HRA) {
		this.HRA = HRA;
	}

	@Override
	public float compute_salary() {
		return basic_salary + HRA;
	}

	@Override
	public void display() {
		System.out.println("Name :" + name + "," + "Address :" + address + "," + "Age : " + age + "," + "Gender :"
				+ gender + "," + "Basic Salary :" + basic_salary + "," + "HRA :" + HRA +" ,"+ "Manager Computed Salary :"
				+ compute_salary());
	}
}
