//컴퓨터공학전공 20200675 문서연
#ifndef _Complex_h
#define _Complex_h

class Complex {
	double real; //실수부값
	double image; //허수부값
public:
	inline void SetComplex(double real, double image)
	{
		Complex::real = real;
		Complex::image = image;
	}; //복소수값 설정
	inline double GetReal(void) const { return real; }; //실수부값 반환
	inline double GetImage(void) const { return image; }; //허수부값 반환
	void ShowComplex(void); //복소수값 출력
public:
	Complex(void);
	Complex(double real, double image);
};

#endif // !_Complex_h