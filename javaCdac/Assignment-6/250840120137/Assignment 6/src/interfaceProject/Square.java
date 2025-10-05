package interfaceProject;

public class Square implements RegularPolygon {
	protected float side;

	public Square(float side) {
		super();
		this.side = side;
	}

	@Override
	public int getNumSides() {
		return 4;
	}

	@Override
	public float getSideLength() {
		return side;

	}

}
