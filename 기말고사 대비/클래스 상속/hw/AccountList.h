#ifndef _AccountList_h
#define _AccountList_h
#include "Account.h"

class AccountList
{
	int size;
	Account* account[100];

public:
	int realSize;
	AccountList(int size);
	~AccountList();

	void push(Account* a);

	Account& operator[](int i);
};

#endif // !_AccountList_h