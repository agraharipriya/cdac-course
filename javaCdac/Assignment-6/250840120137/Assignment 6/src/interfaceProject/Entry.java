package interfaceProject;

public class Entry {

	public static void main(String[] args) {
		RegularPolygon[] shapes ={ new EquilateralTriangle(5.0f), new Square(10.0f), new EquilateralTriangle(3.5f) };

		System.out.println("Total sides: " + PolygonUtils.totalSides(shapes));

		for (RegularPolygon shape : shapes) {
			System.out.println("Perimeter: " + shape.getPerimeter());
			System.out.println("Interior Angle (radians): " + shape.getInteriorAngle());
		}
	}

}
