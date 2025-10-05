
public class Engineer extends Employee {
	protected float over_time;

	public float getOver_time() {
		return over_time;
	}

	public void setOver_time(float over_time) {
		this.over_time = over_time;
	}

	public Engineer(String name, String address, int age, boolean gender, float basic_salary, float over_time) {
		super(name, address, age, gender, basic_salary);
		this.over_time = over_time;
	}

	@Override
	public float compute_salary() {
		return basic_salary + over_time;
	}

	@Override
	public void display() {

		System.out.println("Name :" + name + "," + "Address :" + address + "," + "Age : " + age + "," + "Gender :"
				+ gender + "," + "Basic Salary :" + basic_salary + "," + "Over Time :" + over_time + ","
				+ "Engineer Computed Salary :" + compute_salary());
	}
}
