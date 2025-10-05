
public class Date {

    private int day;
    private int month;
    private int year;

    //getter methods
    public int getDay() {
        return day;
    }

    public int getMonth() {
        return month;

    }

    public int getYear() {
        return year;
    }

    //constructor
    public Date(int day, int month, int year) {
        setDate(day, month, year);
    }

    //setter method to set the date and also validate it according to day,month and year.
    public final void setDate(int day, int month, int year) {

        //for year 
        if (year > 2500 || year < 1900) {
            this.year = 2025; 
        }else {
            this.year = year;
        }

        //for month
        if (month < 1 || month > 12) {
            this.month = 1; 
        }else {
            this.month = month;
        }

        //for day
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            if (day > 31 || day < 1) {
                this.day = 31; 
            }else {
                this.day = day;
            }
        } 
        
        else if (month == 4 || month == 6 || month == 9) {
            if (day > 30 || day < 1) {
                this.day = 30; 
            }else {
                this.day = day;
            }
        }  
        else if (month == 2) {
            
           boolean isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            if (isLeap) {
                if (day > 29 || day < 1) {
                    this.day = 29;
                } else {
                    this.day = day;
                }
            } 
            else {
                if (day > 28 || day < 1) {
                    this.day = 28;
                } else {
                    this.day = day;
                }
            
            }
            }
    }

    public void addDays(int days) {
        for (int i = 0; i < days; i++) {
            this.day++; 

            int daysInMonth;
            if (this.month == 1 || this.month == 3 || this.month == 5 || this.month == 7 || this.month == 8 || this.month == 10 || this.month == 12) {
                daysInMonth = 31;
            } else if (this.month == 4 || this.month == 6 || this.month == 9 || this.month == 11) {
                daysInMonth = 30;
            } else { 
                boolean isLeap = (this.year % 4 == 0 && this.year % 100 != 0) || (this.year % 400 == 0);
                daysInMonth = isLeap ? 29 : 28;
            }

            if (this.day > daysInMonth) {
                this.day = 1; 
                this.month++; 

            
                if (this.month > 12) {
                    this.month = 1;
                    this.year++; 
                }
            }
        }
    }
    //add months
    public void addMonth(int months){
        int newMonth=this.month +months;
       int newYear=this.year+(newMonth-1)/12;
       newMonth=(newMonth-1)%12 +1;
       
       setDate(this.day,newMonth,newYear);
    }

    //add years
    public void addYears(int years){
        setDate(this.day,this.month,this.year+years);
    }

//     //compare years
//    public void compare(Date other) {
//     if (this.year < other.year ||
//        (this.year == other.year && this.month < other.month) ||
//        (this.year == other.year && this.month == other.month && this.day < other.day)) {
//         System.out.println(this + " is before " + other);
//     } else if (this.year == other.year && this.month == other.month && this.day == other.day) {
//         System.out.println(this + " is equal to " + other);
//     } else {
//         System.out.println(this + " is after " + other);
//     }
// }


public void compare(Date other){
    if(this.year ==other.year && this.month==other.month && this.day==other.day){
        System.out.println("Both the date are equal");
    }else    System.out.println("Both the date are not equal");

}

@Override
public String toString() {
        return String.format("%02d/%02d/%04d", day, month, year);
    }

}
