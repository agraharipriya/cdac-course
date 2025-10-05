
public abstract class Employee {
	protected String name;
	protected String address;
	protected int age;
	protected boolean gender;
	protected float basic_salary;
	
	//Parameterized constructor 
	 Employee(String name, String address, int age, boolean gender, float basic_salary) {
			super();
			this.name = name;
			this.address = address;
			this.age = age;
			this.gender = gender;
			this.basic_salary = basic_salary;
		}
	 
	 
	 //getter and setter method
	 
	public String getName() {
		return name;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
	public String getAddress() {
		return address;
	}
	
	public void setAddress(String address) {
		this.address = address;
	}
	
	public int getAge() {
		return age;
	}
	
	public void setAge(int age) {
		this.age = age;
	}
	
	public boolean isGender() {
		return gender;
	}
	
	public void setGender(boolean gender) {
		this.gender = gender;
	}
	
	public float getBasic_salary() {
		return basic_salary;
	}
	
	public void setBasic_salary(float basic_salary) {
		this.basic_salary = basic_salary;
	}

	//abstract compute_salary
	public abstract float compute_salary();
	
	public abstract void display();

}
