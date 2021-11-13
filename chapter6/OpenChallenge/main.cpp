#include <iostream>
#include "UpAndDownGame.h"
#include "Person.h"

using std::cout;
using std::endl;
int main(void)
{
	Person p1("김인수");
	Person p2("오은경");
	
	UpAndDownGame::gameStart(p1, p2);
	return 0;
}