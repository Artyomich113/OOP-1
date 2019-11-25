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
	//реализации абстрактных методов
	virtual bool intersect(Shape *) override;
	virtual std::string name() override;
	virtual float area() override;
};

