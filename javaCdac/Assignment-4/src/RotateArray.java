
public class RotateArray {

	public static void main(String[] args) {
		int arr[]= {10,20,30,40,50,60,70};
		int size=arr.length;
		int newArr[]=new int[size];
		int j=0;
		for(int iTemp=size-1;iTemp>=0;iTemp--) {
			
		 newArr[j]=arr[iTemp];
		 j++;
	
		}
		for(int i=0;i<newArr.length;i++) {
			System.out.println(newArr[i]);
		}
		
	}

}
