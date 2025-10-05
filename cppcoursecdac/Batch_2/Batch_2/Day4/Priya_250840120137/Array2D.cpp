#include <iostream>
using namespace std;
const int ROWS=3;
const int COL=3;

class Array2D{
	public:
	
	static void display(int a[ROWS][COL]){
  	cout<<"\n\t ************* Array Is ***********";
	  	for(int i=0;i<ROWS;i++){
	  	   cout<<endl;
	  	   for(int j=0;j<COL;j++) 	   
	  	      cout<<"\t"<<a[i][j];
	  	      cout<<endl;
	  	 }
  	 }

	static void addArray(int arr1[ROWS][COL],int arr2[ROWS][COL],int result[ROWS][COL]){
		
		for(int i=0;i<ROWS;i++){
			for(int j=0;j<COL;j++){
				result[i][j]=arr1[i][j]+arr2[i][j];
			}
		}
	}
	
	static void transposeArr(int arr1[ROWS][COL],int result[ROWS][COL]){
		for(int i=0;i<ROWS;i++){
			for(int j=0;j<COL;j++){
				result[i][j]=arr1[j][i];
			}
		}
	}
	
	static void multiArr(int arr1[ROWS][COL],int arr2[ROWS][COL],int result[ROWS][COL]){
		for(int i=0;i<ROWS;i++){
			for(int j=0;j<COL;j++){
				result[i][j]=0;
				for(int k=0;k<COL;k++){
					result[i][j] +=arr1[i][k]*arr2[k][j];
				}
			}
		}
	}
	
	static int sumArr(int arr1[ROWS][COL]){
		int sum=0;
		for(int i=0;i<ROWS;i++){
			for(int j=0;j<COL;j++){
				sum +=arr1[i][j];
			}
		}
		return sum;
	}
	
	static int maxArr(int arr1[ROWS][COL]){
		int maxEle=arr1[0][0];
		for(int i=0;i<ROWS;i++){
			for(int j=0;j<COL;j++){
				if(arr1[i][j]>maxEle){
					maxEle=arr1[i][j];
				}
			}
		}
		return maxEle;
	}
	
	static int minArr(int arr1[ROWS][COL]){
		int minEle=arr1[0][0];
		for(int i=0;i<ROWS;i++){
			for(int j=0;j<COL;j++){
				if(arr1[i][j]<minEle){
					minEle=arr1[i][j];
				}
			}
		}
		return minEle;
	}
	
	static void minRowArr(int arr1[ROWS][COL]){
		int min[3],minEle=arr1[0][0];
			for(int i=0;i<ROWS;i++){
			  minEle=arr1[i][0];
				for(int j=0;j<COL;j++){
					
					if(arr1[i][j]<minEle){
						minEle=arr1[i][j];
					}
				}
				min[i]=minEle;
			}
		for(int i=0;i<ROWS;i++){
				cout<<"\nmin of "<<i<< "th Row "<<min[i];
		}	
	}
	
	static void maxRowArr(int arr1[ROWS][COL]){
		int max[3],maxEle=arr1[0][0];
			for(int i=0;i<ROWS;i++){
			  maxEle=arr1[i][0];
				for(int j=0;j<COL;j++){
					
					if(arr1[i][j]>maxEle){
						maxEle=arr1[i][j];
					}
				}
				max[i]=maxEle;
			}
		for(int i=0;i<ROWS;i++){
				cout<<"\nmax of "<<i<< "th Row "<<max[i];
		}	
	}
	
	static void sumRowArr(int arr1[ROWS][COL]){
		int sumRow[3];
			for(int i=0;i<ROWS;i++){
				int sum=0; 
				for(int j=0;j<COL;j++){
						sum +=arr1[i][j];				
				}
				sumRow[i]=sum;	
			}
		for(int i=0;i<ROWS;i++){
				cout<<"\nsum of "<<i<< "th Row "<<sumRow[i];
		}		
	}
	
	static void maxColArr(int arr1[ROWS][COL]){
		int max[3];
			for(int i=0;i<COL;i++){
				int maxEle=arr1[0][i];
				for(int j=1;j<ROWS;j++){
					
					if(arr1[j][i]>maxEle){
						maxEle=arr1[j][i];
					}
				}
				max[i]=maxEle;
			}
		for(int i=0;i<COL;i++){
				cout<<"\nmax of "<<i<< "th COL "<<max[i];
		}			
	}
	
	static void minColArr(int arr1[ROWS][COL]){
		int min[3];
			for(int i=0;i<COL;i++){
				int minEle=arr1[0][i];
				for(int j=1;j<ROWS;j++){
					
					if(arr1[j][i]<minEle){
						minEle=arr1[j][i];
					}
				}
				min[i]=minEle;
			}
		for(int i=0;i<COL;i++){
				cout<<"\nmin of "<<i<< "th COL "<<min[i];
		}	
	}
	
	static void sumColArr(int arr1[ROWS][COL]){
		int sumCol[3];
			for(int i=0;i<ROWS;i++){
				int sum=0; 
				for(int j=0;j<COL;j++){
						sum +=arr1[j][i];				
				}
				sumCol[i]=sum;
			}
		for(int i=0;i<COL;i++){
				cout<<"\nsum of "<<i<< "th COL "<<sumCol[i];
		}	
	}
};
