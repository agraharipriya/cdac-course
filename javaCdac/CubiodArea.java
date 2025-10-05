
import java.util.*;

public class CubiodArea {

    public static void main(String[] args) {
        float l, b, h;
        int x=0b1001;
        int y=0b1100;
       byte z= (byte)(x<<4);      
       z=(byte)(z|y);       
       byte p= (byte)(x>>4);
       y=(byte)(p|x);       
       x=(byte)(p|y);
       System.out.println(x);
       System.out.println(y);
      
        double volume, area, perimeter;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter l,b,h : ");
            l = sc.nextFloat();
            b = sc.nextFloat();
            h = sc.nextFloat();
        }

        volume = l * b * h;
        perimeter = 2 * (l + b + h);
        area = 2 * (l * b + b * h + b * h);
        System.out.println("Perimeter of Cuboid is :" + perimeter);
        System.out.println("Volume of Cuboid is :" + volume);
        System.out.println("Area of Cuboid is :" + area);
    }
}
