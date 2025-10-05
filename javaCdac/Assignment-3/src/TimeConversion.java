
public class TimeConversion {

    public static void main(String[] args) {
        System.out.print("Input Seconds :");
        int seconds = CalculatorInput.getInt();

        int hours = seconds / 3600;
        int remainder = seconds % 3600;
        int minutes = remainder / 60;
        int second = remainder % 60;

        System.out.println(hours + ":" + minutes + ":" + second);
    }

}


//-------------------------------------------------output--------------------------------------------------
//Input Seconds :5879
//1:37:59