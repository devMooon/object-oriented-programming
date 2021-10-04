#ifndef _Child_h
#define _Child_h
class Child {
	int bead;


public:
	Child(void);
	Child(int bead);
public:
	inline int getBead(void) const { return bead; };
	bool setBead(int bead);
	void showInfo(void) const;
	void win(Child *loser, int bead);
	void lose(Child *winner, int bead);
};

#endif // !_Child_h