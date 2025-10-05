
public class Student {
	public String name;
	public int roll_num;
	public String phone_num;
	public String address;

	public Student(String name, int roll_num, String phone_num, String address) {
	
		this.name = name;
		this.roll_num = roll_num;
		this.phone_num =phone_num;
		this.address = address;
	}
	public Student(String name, int roll_num) {
	
		this.name = name;
		this.roll_num = roll_num;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getRoll_num() {
		return roll_num;
	}

	public void setRoll_num(int roll_num) {
		this.roll_num = roll_num;
	}

	public String getPhone_num() {
		return phone_num;
	}

	public void setPhone_num(String phone_num) {
		this.phone_num = phone_num;
	}

	public String getAddress() {
		return address;
	}

	public void setAddress(String address) {
		this.address = address;
	}

}
