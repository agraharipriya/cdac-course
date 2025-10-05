
public class Circle {

	public static double perimeter(double radius) {
		return 2 * 3.14 * radius;

	}
	
	public static double area(double radius) {
		return 3.14 * radius *radius;
	}

	public static void main(String args[]) {
		System.out.println("Enter Radius :");
		double radius = CalculatorInput.getDouble();
		double perimeter=perimeter(radius);
		System.out.println("Perimeter of circle : "+perimeter);
		double area=area(radius);
		System.out.println("Area of Circle :" +area);

	}
}

//-----------------------------------output-------------------------------------------------
//Enter Radius :
//5
//Perimeter of circle : 31.400000000000002
//Area of Circle :78.5