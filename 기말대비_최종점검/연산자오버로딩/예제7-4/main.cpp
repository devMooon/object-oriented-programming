#include "Power.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void) 
{
	Power power1(1, 2);
	Power power2(2, 3);
	Power power3;
	Power power4 = power1;

	power3 = power1 + power2; //객체 안에 포인터가 없으므로 대입 연산자 오버로딩은 필요없음.

	cout << "power1 : " << power1 << endl;
	cout << "power2 : " << power2 << endl;
	cout << "power3 : " << power3 << endl;
	cout << "power4 : " << power4 << endl;

	cout << endl;

	Power* power[3]; //포인터 배열
	for (int i = 0; i < 3; i++) {
		power[i] = new Power(i * 2, i * 2);
		cout << "power[" << i << "] : " << *power[i] << endl;
	}

	cout << endl;

	if (power1 == power3) cout << "power1과 power3은 같습니다." << endl;
	else cout << "power1과 power3은 다릅니다." << endl;
	if (power1 == power4) cout << "power1과 power4은 같습니다." << endl;
	else cout << "power1과 power4은 다릅니다." << endl;

	cout << endl;

	Power p1(1, 2);
	Power p2(2, 3);
	Power p3;
	cout << "p1 : " << p1 << endl;
	cout << "p2 : " << p2 << endl;
	cout << "p3 : " << p3 << endl;

	cout << endl;

	p3 = p1 += p2;
	cout << "p1 : " << p1 << endl;
	cout << "p2 : " << p2 << endl;
	cout << "p3 : " << p3 << endl;

	Power p4;
	cout << "p4 : " << p4 << endl;

	p4 = p3 + 3;

	cout << "p4 : " << p4 << endl;

	++p4;
	cout << "p4 : " << p4 << endl;
	cout << "p4++ : " << p4++ << endl;
	cout << "p4 : " << p4 << endl;
	
	Power p5;
	if (!p4)	cout << "p4의 파워는 0입니다." << endl;
	else		cout << "p4의 파워는 0이 아닙니다." << endl;
	if (!p5)	cout << "p5의 파워는 0입니다." << endl;
	else		cout << "p5의 파워는 0이 아닙니다." << endl;

	Power p6 = 2 + p5;
	cout << "p6 : " << p6 << endl;

	return 0;
}