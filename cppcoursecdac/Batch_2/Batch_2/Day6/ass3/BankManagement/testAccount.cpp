#include "account.h"
#include "SavingAcc.h"
#include "CurrentAcc.h"

int main() {
    // Create Saving Account
    SavingAccount sa("Rahul", "Sharma", "9876543210", "rahul@gmail.com", "CHQ12345");
    sa.display();

    cout << "-----------------------------------------" << endl;

    // Create Current Account
    CurrentAccount ca("Priya", "Agrahari", "9123456780", "priya@gmail.com", 25);
    ca.display();

	cout<<"updateing Priya's Transactions based on balance..."<<endl;
	ca.updateTransactions(25000);
	ca.display();
    return 0;
}
