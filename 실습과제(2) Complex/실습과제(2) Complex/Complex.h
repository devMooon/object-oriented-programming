//��ǻ�Ͱ������� 20200675 ������
#ifndef _Complex_h
#define _Complex_h

class Complex {
	double real; //�Ǽ��ΰ�
	double image; //����ΰ�

public:
	Complex(double real = 0, double image = 0);

	void SetComplex(double real, double image); //���Ҽ��� ����
	void ShowComplex(void) const; //���Ҽ��� ���

	double GetReal(void) const { return real; }; //�Ǽ��ΰ� ��ȯ
	double GetImage(void) const { return image; }; //����ΰ� ��ȯ
	
};

#endif // !_Complex_h