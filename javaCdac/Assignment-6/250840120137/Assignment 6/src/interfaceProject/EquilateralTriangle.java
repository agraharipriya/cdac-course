package interfaceProject;

public class EquilateralTriangle implements RegularPolygon {
	protected float side;

	public EquilateralTriangle(float side) {
		super();
		this.side = side;
	}

	@Override
	public int getNumSides() {
		return 3;
	}

	@Override
	public float getSideLength() {
		return side;

	}

}
