#pragma once
#include "Shape.h"

class TwoDShape : virtual public Shape
{
public:
	TwoDShape();
	virtual ~TwoDShape();

	virtual float volume();//в 2д фигурах объем всегда 0

	virtual float area() = 0;

	virtual bool intersect(Shape *) = 0;

	virtual std::string name() = 0;

};

