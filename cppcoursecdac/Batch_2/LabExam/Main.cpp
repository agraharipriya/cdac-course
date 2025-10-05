#include<iostream>
#include<string>
#include "Book.cpp"
#include "OutOfStockException.cpp"

using namespace std;

int main()
{
	cout<<"Librabry Management System \n";
	cout<<"Enter your choice: \n";
	cout<<"1.Add book \t2.Borrow book \t3. Display book\t 4.Exit : \n";
	int ch;
	cin>>ch;
	Book bookArr[50];
	int ctr=0;
	do
	{

	switch(ch)
	{
		case 1: cout<<"how many books you want to enter?";
			int n;
				for(int i=0;i<n;i++)
				{
				bookArr[ctr+i].AddBook();
				ctr=ctr+1;
				}
			break;

		case 2:
			cout<<"Enter book id you want to borrow: \n";
			int id;
			for(int i=0;i<50;i++)
			{
				if(bookArr[i].bookId==id && bookArr[i].quantity>=1)
				{try{
					bookArr[i].borrow();
				}
				catch(OutOfStockException e)
				{
					e.what();
				}
				}
				else
				{
					cout<<"book not found \n";
				}
			}


			break;

		case 3: cout<<"available books are: ";
			for(int i=0;i<50;i++)
			{
				bookArr[i].DisplayBook();
			}

			break;

		default:
			cout<<"wrong input.. exiting \n";
			exit(0);
	}
	}while(ch!=4)
	return 0;

}
