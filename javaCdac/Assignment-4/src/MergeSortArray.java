
public class MergeSortArray {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int array1[]= {1,2,3,4};
		int array2[]= {2,5,7,8};
		int result[]=new int[array1.length+array2.length];
		int i=0;
		int j=0;
		int k=0;
		
		while(i<array1.length &&  j<array2.length) {
			if(array1[i]<=array2[j]) {
				result[k]=array1[i];
				k++;
				i++;
			}else if(array2[j]<=array1[i]) {
				result[k]=array2[j];
				k++;
				j++;
			}
		}
		
		while(i<array1.length) {
			result[k]=array1[i];
			k++;
			i++;
		}
		
		while(j<array2.length) {
			result[k]=array2[j];
			k++;
			j++;
		}
		
		System.out.print("Merge Sort : ");
		for(int iTemp=0;iTemp<result.length;iTemp++) {
			System.out.print(result[iTemp] +" ");
		}
		
	}
	

}
