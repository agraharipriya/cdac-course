public class SwapArray {
    public static void main(String args[]) {
        int arr[] = {20, 30, 40};
        int [] newArr=new int[arr.length];
        newArr[0] = arr[0];
        arr[0] = arr[arr.length - 1];
        arr[arr.length - 1]=newArr[0] ;
        
        
      
        System.out.print("Array after swapping: ");
        for (int i = 0; i < arr.length; i++) {
           newArr[i]=arr[i];
           System.out.print(newArr[i]+" ");
        }
    }
}
