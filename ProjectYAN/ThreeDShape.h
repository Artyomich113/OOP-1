#pragma once
#include "Shape.h"

class ThreeDShape : virtual public Shape 
{
protected:
	float Height; // высота фигур
public:
	ThreeDShape();
	virtual ~ThreeDShape();

	float volume(); //мы на это этапе абстракции можем определить вычисление объема. вычисление площади - дело реализации метода area() 
	virtual float area() = 0;
	virtual bool intersect(Shape *) = 0;
	virtual std::string name() = 0;
};

