#ifndef _Integet_h
#define _Integer_h

class Integer {
	int num;

public:
	Integer(int num = 0) :num(num) {};
	int get(void) const { return num; };
	void set(int num) { this->num = num; };
};
#endif // !_Integet_h
