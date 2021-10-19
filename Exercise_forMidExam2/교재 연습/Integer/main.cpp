#include <iostream>
#include "Integer.h"

using std::cout;
using std::endl;
int main(void)
{
	Integer n(30);
	cout << n.get() << " ";
	n.set(50);
	cout << n.get() << " ";
}