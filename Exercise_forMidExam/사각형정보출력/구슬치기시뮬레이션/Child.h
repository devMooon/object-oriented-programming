#ifndef _Child_h
#define _Child_h

class Child {
	int numOfBead;

public:
	Child(int numOfBead = 0);

	int getNumOfBead(void) const { return numOfBead; };
	void setNum(int numOfBead);
	void startGame(Child& winner, Child& losser, int numOfBead);
	void showInfo(void) const;

};
#endif // !_Child_h
