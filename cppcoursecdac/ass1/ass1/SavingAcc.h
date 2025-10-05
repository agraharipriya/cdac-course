#ifndef SACCOUNT_H
#define SACCOUNT_H
#include "account.h"

// ---------------- Saving Account ----------------
class SavingAccount : public Account {
private:
	char* chequeBookNumber;
	static float interestRate;
	static float minBalance;

public:

	//parameterised constructor
    SavingAccount(const char* f, const char* l, const char* mob, const char* em, const char* chequeBook);

	//destructor
	~SavingAccount();
    
    void display() const ;
};
#endif
