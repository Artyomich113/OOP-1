#pragma once
#include "Shape.h"

class ThreeDShape : virtual public Shape 
{
protected:
	float Height;
public:
	ThreeDShape();
	virtual ~ThreeDShape();

	// Inherited via Shape
	float volume();
	virtual float area() = 0;
	virtual bool intersect(Shape *) = 0;
	virtual std::string name() = 0;
};

