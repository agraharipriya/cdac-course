
public class StudentEntry {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student objStudent=new Student("John",2);
		System.out.println(objStudent.name+","+objStudent.roll_num);
		
		Student objStudent1=new Student("John",3,"367","pune");
		System.out.println(objStudent1.name+","+objStudent1.roll_num+","+objStudent1.phone_num+","+objStudent1.address);
		
		Student objStudent2=new Student("Sam",4,"267","Mumbai");
		System.out.println(objStudent2.name+","+objStudent2.roll_num+","+objStudent2.phone_num+","+objStudent2.address);
		
	}

}
