public class ArrayCompare {
    public static  void main(String args[]){
        int []arr={50,-20,0,30,40,60,10};
      
        if(arr.length>=2){
          boolean result =(  arr[0]==arr[arr.length-1]);
          System.out.println(result);
        }else 
         System.out.println("The Array size must be >= 2 ");

    } 
}


//output---
//false
