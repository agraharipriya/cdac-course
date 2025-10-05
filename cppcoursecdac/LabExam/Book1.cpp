#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class OutOfStockException : public exception{
    public:
    const char* what() const noexcept override{
        return "book out of stock";
    }
};
class Book{
    private:
        int bookid;
        string title;
        int quantity;
        public:
        Book(){
            bookid=0;
            title="unknown";
            quantity=0;
            
        }
        Book(int bookid, string title,int quantity){
            this->bookid=bookid;
            this->title=title;
            this->quantity=quantity;
        }
        ~Book(){
            cout<<"destructor called "<<endl;
        }

        void setBookid(int bookid){
            this->bookid=bookid;
        }
      void setTitle(const string& title){
        this->title=title;

      }
      void setQuantity(int quantity){
        this->quantity=quantity;
      }

      int getBookid(){
         return bookid;
      }

      string getTitle(){
        return title;
      }
      int getQuantity(){
        return quantity;
      }


      void addBook(){
        cout<<"Enter book Details"<<endl;
        cout<<"ENter book id : ";
        cin>>bookid;
        cin.ignore();
        cout<<"enter title   : ";
        getline(cin,title);
        do{
            cout<<"enter quantity : ";
            cin>>quantity;
            if(quantity <=0){
                cout<<"quanitty must be postive number"<<endl;
                
            }
        }while(quantity <=0);
        cout<<"book added successfully!!!"<<endl;
        }


        int borrowBook(){
            if(quantity <1){
                throw OutOfStockException();
            }
            --quantity;
            return quantity;
        }
        int returnBook(){
            ++quantity;
            return quantity;
        }


        void displayBook(){
            if(bookid!=0){
                    cout<<"\nBook Id: "<<bookid <<"\nTitle  : "<<title<<"\nQuantity  :"<<quantity<<"\n";
            }
        }


      };

int main(){
    cout<<"===== Library Management System ====="<<endl;
    Book bookArr[50];
    int ctr=0;
    int ch;
    do{
        cout<<"1. Add book"<<endl;
        cout<<"2. Borrow book"<<endl;
        cout<<"3. Display books"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Choice: ";
        cin>>ch;

        switch(ch){
            case 1:{
                cout<<"How many books do you want to enter? ";
                int n;
                cin>>n;
                for(int i=0;i<n;i++){
                    if(ctr <50){
                        bookArr[ctr].addBook();
                        ctr++;
                    }
                    else{
                        cout<<"Library is full! Cannot add more books."<<endl;
                        break;
                    }
                }
                break;
            }

            case 2:{
                cout<<"Enter book id you want to borrow: ";
                int id;
                cin>>id;
                bool found=false;

                for(int i=0;i<ctr;i++){
                    if(bookArr[i].getBookid() == id){
                        found=true;
                        try{
                            bookArr[i].borrowBook();
                            cout<<"Book borrowed successfully!"<<endl;
                        }
                        catch(const OutOfStockException& e){
                            cout<<e.what()<<endl; 
                        }
                        break;
                    }
                }
                if(!found){
                    cout<<"Book not found!"<<endl;
                }
                break;
            }

            case 3:{
                cout<<"\nAvailable books in library:"<<endl;
                for(int i=0;i<ctr;i++){
                    bookArr[i].displayBook();
                }
                if(ctr==0){
                    cout<<"No books available."<<endl;
                }
                break;
            }

            case 4:{
                cout<<"Exiting the program."<<endl;
                break;
            }

            default:{
                cout<<"Invalid choice! Please try again."<<endl;
            }
        }

    }while(ch !=4);

    return 0;
}
