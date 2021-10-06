//컴퓨터공학전공 20200675 문서연
#include <iostream>
#ifndef _Child_h
#define _Child_h

class Child {
	int bead;

public:
	Child(int bead = 0);

	int getBead(void) const { return bead; };
	bool setBead(int bead);

	void showInfo(void) const { std::cout << "구슬 개수 : " << bead << std::endl; };

	void win(Child *loser, int bead);
	void lose(Child *winner, int bead) { winner->win(this, bead); };
};
#endif // !_Child_h