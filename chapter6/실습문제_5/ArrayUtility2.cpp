#include "ArrayUtility2.h"

int* ArrayUtility2::concat(int s1[], int s2[], int size)
{
	int* array = new int[size * 2];
	for (int i = 0; i < size; i++) {
		array[i] = s1[i];
		array[size + i] = s2[i];
	}
	return array;
}
int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize)
{
	int* array = new int[size];
	int index = 0;
	int same;

	for (int i = 0; i < size; i++) {
		same = 0;
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) {
				same++;
				break;
			}
		}
		if (same == 0) {
			array[index] = s1[i];
			index++;
		}
	}

	if (index < size) {
		int* newArray = new int[index];
		for (int i = 0; i < index; i++) {
			newArray[i] = array[i];
		}
		delete[] array;
		array = newArray;
	}
	retSize = index;
	return array;
}
