#ifndef _Complex_h
#define _Complex_h

class Complex {
	double real; //�Ǽ��ΰ�
	double image; //����ΰ�
public:
	void SetComplex(double, double); //���Ҽ��� ����
	double GetReal(void); //�Ǽ��ΰ� ��ȯ
	double GetImage(void); //����ΰ� ��ȯ
	void ShowComplex(void); //���Ҽ��� ���
public:
	Complex(void);
	Complex(double real, double image);
};

#endif // !_Complex_h