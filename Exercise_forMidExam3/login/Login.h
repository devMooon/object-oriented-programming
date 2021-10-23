#ifndef _Login_h
#define _Login_h

class Login {
	char passwd[10];
	int chance;

public:
	Login();
	void start() const;
};
#endif // !_Login_h
