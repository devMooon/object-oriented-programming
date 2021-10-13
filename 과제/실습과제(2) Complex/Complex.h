//��ǻ�Ͱ������� 20200675 ������
#ifndef _Complex_h
#define _Complex_h

class Complex {
	double real; //�Ǽ��ΰ�
	double image; //����ΰ�
public:
	inline void SetComplex(double real, double image)
	{
		Complex::real = real;
		Complex::image = image;
	}; //���Ҽ��� ����
	inline double GetReal(void) const { return real; }; //�Ǽ��ΰ� ��ȯ
	inline double GetImage(void) const { return image; }; //����ΰ� ��ȯ
	void ShowComplex(void); //���Ҽ��� ���
public:
	Complex(void);
	Complex(double real, double image);
};

#endif // !_Complex_h