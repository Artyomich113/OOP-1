#include "Square.h"



Square::Square()
{
	Height = 0;
}

Square::Square(float edge, float height)
{
	this->Edge = edge;
	Height = height;
}

Square::~Square()
{
	std::cout << std::endl << name() << "~()";
}

bool Square::intersect(Shape *ob)
{
	std::cout << name() << " implementation for intersection with " << ob->name() << std::endl;
	return true;
}

std::string Square::name()
{
	return "Square";
}

float Square::area()
{
	return Edge * Edge;
}




