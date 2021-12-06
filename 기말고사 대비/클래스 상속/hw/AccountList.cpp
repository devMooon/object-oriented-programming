#include "AccountList.h"
#include <iostream>

using std::cout;
using std::endl;

AccountList::AccountList(int size)
	:size(size), realSize(0)
{

}
AccountList::~AccountList()
{
	for (int i = 0; i < realSize; i++) {
		if (this->account[i] != NULL) delete this->account[i];
	}
	
}
void AccountList::push(Account* a)
{
	if (realSize < size) {
		account[realSize] = a;
		realSize++;
	}
	else cout << "배열의 공간이 부족함.." << endl;
}
Account& AccountList::operator[](int i)
{
	if (i < 0 || i > realSize - 1) {
		cout << "잘못된 접근.." << endl;
		exit(-1);
	}
	return *account[i];
}