//컴퓨터공학전공 20200675 문서연
#ifndef _Complex_h
#define _Complex_h

class Complex {
	double real; //실수부값
	double image; //허수부값

public:
	Complex(double real = 0, double image = 0);

	void SetComplex(double real, double image); //복소수값 설정
	void ShowComplex(void) const; //복소수값 출력

	double GetReal(void) const { return real; }; //실수부값 반환
	double GetImage(void) const { return image; }; //허수부값 반환
	
};

#endif // !_Complex_h