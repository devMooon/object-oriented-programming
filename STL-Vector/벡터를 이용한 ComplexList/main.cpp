#include <iostream>
#include "Complex.h"
#include "ComplexList.h"
#include "ComplexList_p.h"

using std::cout;
using std::cerr;
using std::endl;

int main(void)
{
	ComplexList complexList;
	
	cout << "*** ComplexList Test ***" << endl << endl;
	cout << "1. complexList.add(-2, 3)\t"; complexList.add(-2, 3);
	cout << "2. complexList.add(3, -2)\t"; complexList.add(3, -2);
	cout << "3. complexList.add()\t\t"; complexList.add();
	cout << "4. complexList.add(1, 3)\t"; complexList.add(1, 3);
	cout << "5. complexList.add(2, 4)\t"; complexList.add(2, 4);
	cout << "6. complexList.add(3, 5)\t"; complexList.add(3, 5);

	try {
		cout << "7. complexList.Get(2)\t\t";
		Complex c = complexList.Get(2);
		c.ShowComplex();
	}
	catch (const char* s) {
		cerr << s << endl;
	}

	try {
		cout << "8. complexList.Get(50)\t\t";
		Complex c = complexList.Get(50);
		c.ShowComplex();
	}
	catch (const char* s) {
		cerr << s << endl;
	}

	try {
		cout << "9. complexList.pGet(2)\t\t";
		Complex* c = complexList.pGet(2);
		c->ShowComplex();
	}
	catch (const char* s) {
		cerr << s << endl;
	}

	try {
		cout << "10. complexList.pGet(50)\t";
		Complex* c = complexList.pGet(50);
		c->ShowComplex();
	}
	catch (const char* s) {
		cerr << s << endl;
	}

	complexList.print();

	cout << endl << endl;

	ComplexList_p complexList_p;

	cout << "*** ComplexList_p Test ***" << endl << endl;
	cout << "1. complexList_p.add(-2, 3)\t"; complexList_p.add(-2, 3);
	cout << "2. complexList_p.add(3, -2)\t"; complexList_p.add(3, -2);
	cout << "3. complexList_p.add()\t\t"; complexList_p.add();
	cout << "4. complexList_p.add(1, 3)\t"; complexList_p.add(1, 3);
	cout << "5. complexList_p.add(2, 4)\t"; complexList_p.add(2, 4);
	cout << "6. complexList_p.add(3, 5)\t"; complexList_p.add(3, 5);

	try {
		cout << "7. complexList_p.Get(2)\t\t";
		Complex c = complexList_p.Get(2);
		c.ShowComplex();
	}
	catch (const char* s) {
		cerr << s << endl;
	}

	try {
		cout << "8. complexList_p.Get(50)\t";
		Complex c = complexList_p.Get(50);
		c.ShowComplex();
	}
	catch (const char* s) {
		cerr << s << endl;
	}

	try {
		cout << "9. complexList_p.pGet(2)\t";
		Complex* c = complexList_p.pGet(2);
		c->ShowComplex();
	}
	catch (const char* s) {
		cerr << s << endl;
	}

	try {
		cout << "10. complexList_p.pGet(50)\t";
		Complex *c = complexList_p.pGet(50);
		c->ShowComplex();
	}
	catch (const char* s) {
		cerr << s << endl;
	}

	complexList_p.print();
	
}