#include <iostream>
using namespace std;

double area(double length,double breadth){
    return length*breadth;
}
// factorial of a number
int factorial(int n ){
    int fact=1;
    for(int i=1; i<=n;i++){
        fact *=i;
    }
    return fact;
}

int findMax(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
   int choice;
   cout<<"ENter your choice :";
   cin>>choice;
   do{
    cout<<"1.Area of Rectangle"<<endl;
    cout<<"2.Factorial of a number"<<endl;
    cout<<"3. Finad max of an array" <<endl;
    cout<<"4.Exit"<<endl;

   }while(choice!=4);

   switch(choice){
    case 1:{
        double l, b;
        cout<<"enter legnth and breadth";
        cin >>l >>b;
        cout<<"area of rectangle"<<area(l,b)<<endl;
        break;
    }


       case 2:{
       int n;
        cout<<"enter a number";
        cin >>n;
        cout<<"Factorial of num :"<<factorial(n)<<endl;
        break;
    }
    case 3 :{
        int arr[10], n;
        cout<<"enter a number : ";
        cin>>n;
        cout<<"enter array elements : ";
        for(int i=0; i <n;i++){
            cin>>arr[i];
        }
        cout<<"Max of an Array :"<<findMax(arr,n)<<endl;
        break;
    }
    default:
        cout<<"invalid choice"<<endl;
        break;
   }
    return 0;
}