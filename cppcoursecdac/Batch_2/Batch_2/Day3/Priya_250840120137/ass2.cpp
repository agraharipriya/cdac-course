#include <iostream>
using namespace std;

//Function to accept array
void acceptarray(int arr[],int n){
    for(int i=0;i<n;i++){
    cout << "Element " << i + 1 << ": ";
    cin >> arr[i];
    }
}

//Function to display array
void displayArr(int arr[] ,int size){
    cout << "Array elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int findmaxArr(int arr[],int size){
    int max=arr[0];
    for(int i=0; i<size;i++){
    if(arr[i]>max){
    max=arr[i];
    }
    }
  return max; 
}

int findminArr(int arr[],int size){
    int min=arr[0];
    for(int i=0; i<size;i++){
    if(arr[i]<min){
    min=arr[i];
    }
    }
  return min; 
}

int findsum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
     sum=sum+arr[i];
    }
    return sum;
}

int searchnum(int arr[], int size){
    int num;
    cout<<"enter a number to search :"<<endl;
    cin>>num;
    bool found = false; 
    for(int i=0;i<size;i++){
        if(num==arr[i]){
            cout<<num<<" found in array."<<endl;
            found = true; 
            break; 
        }
    }
    if(!found){ 
        cout<<num<<" not found in array."<<endl;
    }
    return 0;
}


void numdivisible(int arr[], int size) {
    int num;
    cout << "Enter a number to divide: " << endl;
    cin >> num;
    for(int i=0;i<size;i++){
        if(arr[i]%num==0){
            cout<<arr[i]<<"is divisible by "<<num<<endl;
            }
            else{
               cout<<arr[i]<<"is not divisible by"<<num<<endl;
            }
    }
   
}

void numaverage(int arr[], int size) {
    int count = 0;
    int sum = 0;
    float average; 

    for (int i = 0; i < size; i++) {
        if (arr[i] % 6 == 0) {
            count++;
            sum = sum + arr[i];
        }
    }

    if (count == 0) {
        cout<<"Not divisible by 6"<<endl;
        
    } else {
        
        average = sum / count; 
        cout<<average<<endl;
    }
    
}



int main(){
    int myarr[5];
    int size;
    cout<<"enter size: "<<endl;
    cin>>size;
    acceptarray(myarr,size);
    displayArr(myarr,size);
    cout<<findmaxArr(myarr,size)<<endl;
    cout<<findminArr(myarr,size)<<endl;
    cout<<findsum(myarr,size)<<endl;
    searchnum(myarr,size);
    numdivisible(myarr,size);
    numaverage(myarr,size);
    return 0;
}

