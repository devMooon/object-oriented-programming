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
	else cout << "�迭�� ������ ������.." << endl;
}
Account& AccountList::operator[](int i)
{
	if (i < 0 || i > realSize - 1) {
		cout << "�߸��� ����.." << endl;
		exit(-1);
	}
	return *account[i];
}