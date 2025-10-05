#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "account.h"

// ---------------- Saving Account ----------------
class SavingAccount : public Account {
private:
  char* chequeBookNumber;
	static float interestRate;
	static float minBalance;

public:
    SavingAccount(const char* f, const char* l, const char* mob, const char* em, const char* chequeBook);
	~SavingAccount();
    
    void display() const ;
};
#endif
