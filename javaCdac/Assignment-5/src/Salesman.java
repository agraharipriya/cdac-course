
public class Salesman extends Employee {
	protected float commission;

	/**
	 * @param name
	 * @param address
	 * @param age
	 * @param gender
	 * @param basic_salary
	 */
	public Salesman(String name, String address, int age, boolean gender, float basic_salary, float commission) {
		super(name, address, age, gender, basic_salary);
		this.commission = commission;
	}

	/**
	 * @return the commission
	 */
	public float getCommission() {
		return commission;
	}

	/**
	 * @param commission the commission to set
	 */
	public void setCommission(float commission) {
		this.commission = commission;
	}

	@Override
	public float compute_salary() {
		return basic_salary + commission;
	}

	@Override
	public void display() {
		System.out.println("Name :" + name + "," + "Address :" + address + "," + "Age : " + age + "," + "Gender :"
				+ gender + "," + "Basic Salary :" + basic_salary + "," + "Commission :" + commission
				+", "+ "Salesman Computed Salary :" + compute_salary());
	}
}
