#pragma once
#include "Shape.h"
#include "ThreeDShape.h"

class Triangle : public virtual ThreeDShape
{
	float edge,edgeheight;
public:
	Triangle();
	Triangle(float edge,float edgeheight,float height);
	~Triangle();

	// Inherited via Shape
	virtual bool intersect(Shape *) override;
	virtual std::string name() override;

	// Inherited via Shape
	virtual float area() override;
};

