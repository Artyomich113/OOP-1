#pragma once

#include <string>
#include <iostream>
#include <math.h>

class Shape
{
public:
	Shape();
	virtual float volume() = 0;
	void print();
	virtual float area() = 0;
	virtual ~Shape();
	virtual bool intersect(Shape *) = 0;
	virtual std::string name() = 0;
	friend bool GlIntersect(Shape *,Shape*);
};

