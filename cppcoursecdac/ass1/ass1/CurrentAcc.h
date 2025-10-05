
#ifndef CACCOUNT_H
#define CACCOUNT_H
#include "account.h"


// ---------------- Current Account ----------------
class CurrentAccount : public Account {
	private:
    	int transactionsPerDay;
		static float interestRate;
		static float minBalance;

	public:
	
	//parameterised constructor
    CurrentAccount(const char* f, const char* l, const char* mob, const char* em, int transactions);
    
    //destructor
	~CurrentAccount();
	
    //display method
    void display() const ;
    
	void updateTransactions(int avgBalance);
	};
	
#endif
