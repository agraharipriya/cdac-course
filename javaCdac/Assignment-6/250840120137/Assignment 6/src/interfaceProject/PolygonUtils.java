package interfaceProject;

public class PolygonUtils {
	
	public static double totalSides(RegularPolygon[] polygons) {
		
		int total=0;
		for(RegularPolygon p:polygons) {
			total+=p.getNumSides();
		}
		return total;
	}
	
}
