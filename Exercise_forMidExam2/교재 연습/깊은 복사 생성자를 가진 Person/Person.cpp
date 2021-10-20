#define _CRT_SECURE_NO_WARNINGS
#include "Person.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

Person::Person(int id, const char* name) //������
{
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}
Person::Person(const Person& p)//���� ������
{
	this->id = p.id;
	int len = strlen(p.name);
	this->name = new char[len + 1];
	strcpy(this->name, p.name);
	cout << "���� ������ ����. ���� ��ü�� �̸�" << this->name << endl;
}
Person::~Person()//�Ҹ���
{
	if (name != NULL) {
		delete[] name;
	}
	
}
void Person::changeName(const char* name)
{
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}