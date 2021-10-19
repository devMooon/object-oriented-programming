#ifndef _Number_
#define _Number_

class Number {
	int* numbers;
	int vaildSize;
	int size;

public:
	Number(int size = 0);

	void Modify(void);
	int getNum(int index) const;
	void setNum(int index, int num);
	void show(void) const;
	int sum(void);
};
#endif // !_Number_

