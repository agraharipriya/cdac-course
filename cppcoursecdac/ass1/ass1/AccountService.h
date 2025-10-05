#ifndef ASACCOUNT_H
#define ASACCOUNT_H

#include "account.h"
#include "CurrentAcc.h"
#include "SavingAcc.h"

class AccountService:public Account{
	static Account* acc[100];
	static int count;
	
	public:
		static void addAccount(int n);
		static void displayAll();
		static int 	searchByAccNum(const char* accId, Account* result[100]);	
		static int searchByName(const char* name,Account* result[100]);
		// static int sortByAccBal();
		static void displaySavAcc();
		static void displayCurrAcc();
};

#endif
