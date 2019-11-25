#pragma once
#include "Shape.h"

class TwoDShape : virtual public Shape
{
public:
	TwoDShape();
	virtual ~TwoDShape();

	virtual float volume();//� 2� ������� ����� ������ 0

	virtual float area() = 0;

	virtual bool intersect(Shape *) = 0;

	virtual std::string name() = 0;

};

