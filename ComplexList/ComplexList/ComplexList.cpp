#include "ComplexList.h"

//�迭 ��� n�� ���Ҽ� ���� r = real, i = image
void ComplexList::Set(int n, double r, double i) {
	if (n >= getSize()) {
		modifySize(n + 10);
	}
	cl[n].SetComplex(r, i);
};
void ComplexList::modifySize(int n) {
	Complex* newCl = new Complex[n]; //�� ū ���ο� �迭 ����
	for (int i = 0; i < Length(); i++) { //���� �迭�� ����� ���(��ü)�� �� �迭�� ����
		newCl[i] = cl[i]; //���1.  ���� �迭�� ��ü ��ü�� ���ο� �迭 ��ҿ� �����Ѵ�.
		//newCl[i].SetComplex(cl[i].GetReal(), cl[i].GetImage()); //��� 2. ���� �迭 ����� ��ü�� real���� imge���� ���ο� ��ü�� real�� image������ ���� ��Ų��.
	}
	delete[] cl; //cl�� ����Ű�� ���� �迭 �Ҵ� ����
	cl = newCl; //����ʵ��� �����Ͱ� �� �迭�� ����Ű�� ��
	setSize(n); //�迭�� ũ�⸦ ���� ������
};