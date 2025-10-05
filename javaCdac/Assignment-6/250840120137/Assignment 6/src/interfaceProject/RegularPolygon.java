package interfaceProject;

public interface RegularPolygon {
	public int getNumSides();

	public float getSideLength();

//	java 8 onwards 

	public default double getPerimeter() {

		return getNumSides() * getSideLength();

	}

	public default double getInteriorAngle() {

		return ((getNumSides() - 2) * Math.PI) / getNumSides();

	}

}
