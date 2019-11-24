#pragma once
#include "Shape.h"
#include "ThreeDShape.h"

class Square : virtual public ThreeDShape
{
	float Edge;
public:
	Square();
	Square(float val,float height);
	~Square();

	virtual bool intersect(Shape *) override;

	virtual std::string name() override;

	virtual float area() override;


	

};

