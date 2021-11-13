#ifndef _UpAndDownGame_h
#define _UpAndDownGame_h
#include "Person.h"

class UpAndDownGame
{
	static int num;
	static int min;
	static int max;

public:
	static void gameStart(const Person& p1, const Person& p2);
	static bool yourTurn(const Person& p);
};
#endif // !_UpAndDownGame_h