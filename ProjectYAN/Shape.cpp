#include "Shape.h"



Shape::Shape()
{
}

void Shape::print()
{
	std::cout << name() << " area " << area() << " volume " << volume() << std::endl;
}


Shape::~Shape()
{
	std::cout << "Shape ~()";
}

bool GlIntersect(Shape *ob1, Shape *ob2)
{
	std::cout << ob1->name() << " is using some func to define intersection with " << ob2->name() << std::endl;
	ob1->intersect(ob2);

	return true;
}
