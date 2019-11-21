#pragma once
#include <iostream>

class Cstring
{
	int lenth;
	char *str;
public:
	Cstring();
	Cstring(const Cstring&);
	Cstring(char *);
	Cstring(char *,int);

	//���������� ����������
	Cstring * operator +(const Cstring);
	Cstring * operator =(Cstring);
	bool operator >(Cstring);
	bool operator <(Cstring);
	bool operator >=(Cstring);
	bool operator <=(Cstring);
	bool operator !=(Cstring);
	bool operator ==(Cstring);
	Cstring * operator +=(Cstring); 
	//��������� �����/������
	friend std::ostream &operator <<(std::ostream &stream, const Cstring *val); 
	friend std::istream &operator >>(std::istream &stream, Cstring *&val);

	~Cstring();
};

