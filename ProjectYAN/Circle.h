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
	
	virtual bool intersect(Shape *) override;

	virtual std::string name() override;


	// Inherited via TwoDShape
	
	virtual float area() override;

};

