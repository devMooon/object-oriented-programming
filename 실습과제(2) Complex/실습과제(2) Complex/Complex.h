#ifndef _Complex_h
#define _Complex_h

class Complex {
	double real; //실수부값
	double image; //허수부값
public:
	void SetComplex(double, double); //복소수값 설정
	double GetReal(void); //실수부값 반환
	double GetImage(void); //허수부값 반환
	void ShowComplex(void); //복소수값 출력
public:
	Complex(void);
	Complex(double real, double image);
};

#endif // !_Complex_h