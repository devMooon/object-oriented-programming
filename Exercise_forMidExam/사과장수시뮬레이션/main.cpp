#include "AppleSeller.h"
#include "Person.h"
#include <iostream>


void show(AppleSeller s, Person p)
{
	std::cout << "판매현황..." << std::endl;
	p.show();
	s.show();
	std::cout << std::endl;
}

int main(void)
{
	AppleSeller seller;
	Person person;

	show(seller, person);
	person.buyApple(seller, 4500);
	show(seller, person);
}