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

	//перегрузки операторов
	Cstring * operator +(const Cstring);
	Cstring * operator =(Cstring);
	bool operator >(Cstring);
	bool operator <(Cstring);
	bool operator >=(Cstring);
	bool operator <=(Cstring);
	bool operator !=(Cstring);
	bool operator ==(Cstring);
	Cstring * operator +=(Cstring); 
	//операторы ввода/вывода
	friend std::ostream &operator <<(std::ostream &stream, const Cstring *val); 
	friend std::istream &operator >>(std::istream &stream, Cstring *&val);

	~Cstring();
};

