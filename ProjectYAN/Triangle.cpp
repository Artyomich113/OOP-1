#include "Triangle.h"



Triangle::Triangle()
{
}

Triangle::Triangle(float edge, float edgeheight, float height)
{
	this->edge = edge;
	this->edgeheight = edgeheight;
	Height = height;
}


Triangle::~Triangle()
{
	std::cout << std::endl << name() << "~()";
}

bool Triangle::intersect(Shape *ob)
{
	std::cout << name() << " implementation for intersection with " << ob->name() << std::endl;
	return true;
}

std::string Triangle::name()
{
	return "Triangle";
}

float Triangle::area()
{
	return 0.5f * edge * edgeheight;
}
