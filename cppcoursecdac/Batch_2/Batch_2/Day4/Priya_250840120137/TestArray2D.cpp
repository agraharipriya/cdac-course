#include <iostream>
using namespace std;
#include "Array2D.cpp"

int main(){
	int result[ROWS][COL];
	int arr1[ROWS][COL]={{1,3,2},{6,5,4},{8,7,9}};
	int arr2[ROWS][COL]={{3,2,1},{6,5,4},{9,8,7}};
	
	cout<<"Select one function : "<<endl;
	cout<<"	1. add 2 matrices"<<endl;
	cout<<"	2. transpose of matric"<<endl;
	cout<<"	3. multiplication of 2 matrices"<<endl;
	cout<<"	4. find sum of all values"<<endl;
	cout<<"	5. find maximum number"<<endl;
	cout<<"	6. find minimum number"<<endl;
	cout<<"	7. find rowwise minimum"<<endl;
	cout<<"	8. find rowwise maximum"<<endl;
	cout<<"	9. find rowwise sum"<<endl;
	cout<<"	10. find columnwise maximum"<<endl;
	cout<<"	11. find columnwise minimum"<<endl;
	cout<<"	12. find columnwise sum"<<endl;
	
	int choice;
	cout<<"Enter Choice:  "<<endl;
	cin>>choice;
	
	switch(choice){
		case 1:{
			Array2D::addArray(arr1,arr2,result);
			Array2D::display(arr1);
			Array2D::display(arr2);
			Array2D::display(result);
			break;}
			
		case 2:{
			Array2D::transposeArr(arr1,result);
			Array2D::display(arr1);
			Array2D::display(result);
			break;}
			
		case 3:{
			Array2D::multiArr(arr1,arr2,result);
			Array2D::display(arr1);
			Array2D::display(arr2);
			Array2D::display(result);
			break;}
			
		case 4:{
			int sum=Array2D::sumArr(arr1);
			Array2D::display(arr1);
			cout<<"Sum of elements of array: "<<sum<<endl;
			break;}
			
		case 5:{
			int max=Array2D::maxArr(arr1);
			Array2D::display(arr1);
			cout<<"Max of array elements : "<<max<<endl;
			break;}
			
		case 6:{
			int min=Array2D::minArr(arr1);
			Array2D::display(arr1);
			cout<<"Min of array elements : "<<min<<endl;
			break;}
			
		case 7:{
			Array2D::minRowArr(arr1);
			Array2D::display(arr1);
			break;}
			
		case 8:{
			Array2D::maxRowArr(arr1);
			Array2D::display(arr1);
			break;}
			
		case 9:{
			Array2D::sumRowArr(arr1);
			Array2D::display(arr1);
			break;}
			
		case 10:{
			Array2D::maxColArr(arr1);
			Array2D::display(arr1);
			break;}
			
		case 11:{
			Array2D::minColArr(arr1);
			Array2D::display(arr1);
			break;}
			
		case 12:{
			Array2D::sumColArr(arr1);
			Array2D::display(arr1);
			break;}
			
		default:
			cout<<"ENTER FROM GIVEN MENU !!"<<endl;
	}
	
	return 0;
	}
