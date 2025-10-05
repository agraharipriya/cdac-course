


public class ArrayMultiply {
    public static void main(String args[]){
        int arr[]={1,3,-5,4};
        int arr1[]={1,4,-5,-2};

int newArr[]=new int[arr.length];
        for(int i=0;i<arr.length;i++){
           
                newArr[i]=arr[i]*arr1[i];
            }
        
       System.out.print("Result : ");
       for(int i=0;i<newArr.length;i++){
        System.out.print(newArr[i]+" ");
       }
    }
}
