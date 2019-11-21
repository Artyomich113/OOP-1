#include "Cstring.h"



Cstring::Cstring()
{
	lenth = 0;
	str = new char[1];
}

Cstring::Cstring(const Cstring &ob)
{
	lenth = ob.lenth;
	char *ptr = ob.str;
	str = new char[lenth + 1];
	char *locptr = str;

	memcpy(str,ob.str,lenth+1);
}

Cstring::Cstring(char *val)
{
	str = val;
	char *ptr = str;

	while (str != '\0')
	{
		ptr++;
	}

	lenth = ptr - str;
}

Cstring::Cstring(char *val, int len)
{
	lenth = len;
	str = val;
}

Cstring * Cstring::operator+(const Cstring ob) //+
{
	int newlenth = lenth + ob.lenth;
	char *newstr = new char[newlenth];
	
	memcpy(newstr,this->str,this->lenth);
	memcpy(newstr + this->lenth,ob.str,ob.lenth+1);

	return new Cstring(newstr, newlenth);
}

Cstring * Cstring::operator=(Cstring val) //+
{
	delete this->str;

	lenth = val.lenth;
	this->str = new char[lenth + 1];
	
	memcpy(str,val.str,val.lenth+1);
	
	return this;
}

bool Cstring::operator>(Cstring val)
{
	return (strcmp(this->str, val.str) > 0) ? true : false;
}

bool Cstring::operator<(Cstring val)
{
	return (strcmp(this->str, val.str) < 0) ? true : false;
}

bool Cstring::operator>=(Cstring val)
{
	return (strcmp(this->str, val.str) >= 0) ? true : false;
}

bool Cstring::operator<=(Cstring val)
{
	return (strcmp(this->str, val.str) <= 0) ? true : false;
}

bool Cstring::operator!=(Cstring val)
{
	return (strcmp(this->str, val.str) != 0) ? true : false;
}

bool Cstring::operator==(Cstring  val)//+
{

	return (strcmp(this->str, val.str) == 0) ? true : false;
}

Cstring * Cstring::operator+=(Cstring val) //+
{
	int newlenth = lenth + val.lenth;
	char * newstr = new char[newlenth+1];
	memcpy(newstr,str,lenth);
	memcpy(newstr + lenth,val.str,val.lenth + 1);

	lenth = newlenth;
	delete[] str;
	str = newstr;

	return this;
}


Cstring::~Cstring() //+
{
	delete[] str;
}

std::ostream & operator <<(std::ostream &stream, const Cstring *val) //+
{
	stream << val->str;
	return stream;
}

std::istream & operator >>(std::istream &stream, Cstring *&val) //+
{
	char buffer[50];// = new char[50];
	stream >> buffer;

	char * ptr = buffer;
	delete[] val->str;

	while (*ptr != '\0')
	{
		ptr++;
	}
	val->lenth = ptr - buffer;
	val->str = new char[val->lenth+1];
	
	memcpy(val->str,buffer,val->lenth+1);

	return stream;
}
