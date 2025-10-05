
public class DateEntry {

    public static void main(String args[]) {
    	
    	//Taking input from user
        System.out.println("Enter day");
        int day = CalculatorInput.getInt();
        
        System.out.println("Enter month ");
        int month = CalculatorInput.getInt();
        
        System.out.println("Enter  year");
        int year = CalculatorInput.getInt();

        //create an object of class Date
        Date objDate = new Date(day, month, year);
        
        objDate.setDate(day, month, year);
        System.out.println("Date is :" + objDate.getDay() + "/" + objDate.getMonth() + "/" + objDate.getYear());

        System.out.print("Enter the days you want to add :");
        int days = CalculatorInput.getInt();
        objDate.addDays(days);
        System.out.println("Date :" + objDate);
        
        System.out.print("Enter the months you want to add :");
        int months = CalculatorInput.getInt();
        objDate.addMonth(months);
        System.out.println("Date:" + objDate);

        System.out.print("Enter the years you want to add :");
        int years = CalculatorInput.getInt();
        objDate.addYears(years);
        System.out.println("Date :" + objDate);
        
        Date objDate1=new Date(12,2,2035);
        System.out.println( "Original date : "+ objDate+ "  new date : "+objDate1);
        objDate.compare(objDate1);
      
        

    }
}
