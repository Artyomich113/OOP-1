#include "Circle.h"



Circle::Circle()
{
	r = 0.0f;
}


Circle::Circle(float val)
{
	r = val;
}

Circle::~Circle()
{
	std::cout << std::endl << name() << "~()";
}

bool Circle::intersect(Shape *ob)
{

	std::cout << name() << " implementation for intersection with " << ob->name() << std::endl;
	return true;
}

std::string Circle::name()
{
	return "Circle";
}



float Circle::area()
{
	return r * r * 3.1415f;
}

