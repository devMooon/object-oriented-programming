#ifndef _SortedArray_h
#define _SortedArray_h
class SortedArray
{
	int size;
	int* p;
	void sort();
public:
	SortedArray();
	SortedArray(SortedArray& src);
	SortedArray(int p[], int size);
	~SortedArray();
	SortedArray operator+(SortedArray& op2);
	SortedArray& operator=(const SortedArray& op2);
	void show();
};

#endif // !_SortedArray_h