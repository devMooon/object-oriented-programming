//��ǻ�Ͱ������� 20200675 ������
#include <iostream>
#ifndef _Child_h
#define _Child_h

class Child {
	int bead;

public:
	Child(int bead = 0);

	int getBead(void) const { return bead; };
	bool setBead(int bead);

	void showInfo(void) const { std::cout << "���� ���� : " << bead << std::endl; };

	void win(Child *loser, int bead);
	void lose(Child *winner, int bead) { winner->win(this, bead); };
};
#endif // !_Child_h