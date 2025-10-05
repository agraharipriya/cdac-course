
import java.util.*;

public class AreaTriangle {

    double triangleArea(float a, float b, float c) {
        double s, area;
        s = 0.5 * (a + b + c);
        area = Math.sqrt(s * (s - a) * (s - b) * (s - c));
        return area;
    }

    double areaTriangle(float b, float h) {
        return 0.5 * b * h;
    }

    public static void main(String args[]) {
        AreaTriangle obj = new AreaTriangle();
        try (Scanner sc = new Scanner(System.in)) {
            float a,b,c,d, h;
            System.out.println("Enter base and height : ");
            b = sc.nextFloat();
            h = sc.nextFloat();
            System.out.println("Enter three side of triangle");
            a = sc.nextFloat();
            c = sc.nextFloat();
            d=sc.nextFloat();
            double result = obj.triangleArea(a,d,c);
            double areA = obj.areaTriangle(b, h);
            System.out.println(areA);
            System.err.println("Area using three sides : " + Math.floor(result));
        }
    }

}
