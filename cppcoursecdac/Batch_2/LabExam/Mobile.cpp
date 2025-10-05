#include <iostream>
#include<cstring>
using namespace std;

class Mobile{
    int mobile_id;
 char name[50];
    int quantity;
    float price;

    public:
        Mobile(){
            mobile_id=0;
            strcpy(name,"unknown");
            quantity=0;
            price=0.0;
        
        }


        Mobile(int id,  const char* n, int q, float p){
            mobile_id=id;
           
            strcpy(name,n);
            quantity=q;
            price=p;

        }

        ~Mobile(){
            
        }

        //setter method 

        void setMobileId(int id){
            mobile_id=id;
        }
        
        void setName(const char* n){
          
            strcpy(name,n);
        }

        void setQuantity(int q){
            quantity=q;
        
        }
        void setPrice(float p){
            price=p;
        }


        //getter method

        int getMobileId() const{
            return mobile_id;
        }
        const char* getName() const{
            return name;
        }
        int getQuantity() const{
            return quantity;
        }

        float getPrice(){
            return price;
        }

        void display() const{
            cout<<"Mobile ID : "<<mobile_id<<endl;
            cout<<"Name      : "<<name<<endl;
            cout<<"Quantity  : "<<quantity<<endl;
            cout<<"Price     : "<<price<<endl;
        }




};


//sum of the digits of mobile id

int sumofDigits(int num){
int sum=0;
    while(num > 0){
        sum +=num%10;
        num/=10;
    }
    return sum;

}
int main(){
Mobile mob[10];
int id, q;
char n[50];
float p;

cout<<"Enter details of the mobile"<<endl;

for(int i=0;i<10; i++){
    cout<<"Enter Mobile ID, Name, Quantity, Price : ";
    cin>>id;
    cin>>n;
    cin>>q;
    cin>>p;
    mob[i].setMobileId(id);
    mob[i].setName(n);
    mob[i].setQuantity(q);
    mob[i].setPrice(p);
}

//searching n deleting mobile
int searchId;
cout<<"enter Searchid to search : ";
cin>>searchId;
for(int i=0; i<10;i++){
    if(mob[i].getMobileId()==searchId){
        cout<<"Mobile found : "<<endl;
        mob[i].display();
        char ch;
        cout<<"do you want to dekete this mobile? (y/n)";
        cin>>ch;
        if(ch=='y' || ch=='Y'){
        for(int j=i; i<9;j++){
            mob[j]=mob[j+1];
        }
        cout<<"mobile is deleted successfully"<<endl;
    }
        else{
            cout<<"Mobile is not deleted"<<endl;
        }

        break;
    }
}

cout<<"Details of the Remaining mobiles are : "<<endl;
for(int i=0;i<10; i++){
if(mob[i].getMobileId()!=0){
    mob[i].display();  
}
}
int arr[10];
for(int i=0; i<10; i++){
    cin>>arr[i];
}
for(int i=0; i<10; i++){
    if(arr[i] % 7 ==0){
        cout<<"Elements are :"<<arr[i]<<"sum of digits : "<<sumofDigits(arr[i])<<endl;
    }else{
        cout<<"No elements is divisible by 7"<<endl;
    }
}

    return 0;
}