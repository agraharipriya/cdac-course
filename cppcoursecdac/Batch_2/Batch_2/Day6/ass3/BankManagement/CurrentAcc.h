
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "account.h"


// ---------------- Current Account ----------------
class CurrentAccount : public Account {
private:
    int transactionsPerDay;
		static float interestRate;
	static float minBalance;

public:
    CurrentAccount(const char* f, const char* l, const char* mob, const char* em, int transactions);
	~CurrentAccount();
	
    
    void display() const ;
void updateTransactions(int avgBalance);
};
#endif
