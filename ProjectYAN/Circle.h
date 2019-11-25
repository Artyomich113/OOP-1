#pragma once
#include "Shape.h"
#include "TwoDShape.h"

class Circle : virtual public TwoDShape 
{
	float r;
public:
	Circle(float val);
	Circle();
	~Circle();
	//реализации абстрактных методов
	virtual bool intersect(Shape *) override;
	virtual std::string name() override;
	virtual float area() override;
};

