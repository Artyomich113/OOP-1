#include "SquareEXT.h"

SquareEXT::SquareEXT()
{

}

SquareEXT::SquareEXT(Point * point, Line * line,Color *color)
{
	x = point->x;
	y = point->y;

	x0 = line->x0;
	x1 = line->x1;
	y0 = line->y0;
	y1 = line->y1;

	this->color.Equals(color);
}


SquareEXT::~SquareEXT()
{

}

void SquareEXT::print()
{
	Line line(x0,y0,x1,y1,nullptr);
	std::cout << "center " << x << " " << y << " with edge of " << distLine(line) * 2 << std::endl;

	color.print();
}

void SquareEXT::translate(float x, float y)
{
	Point::translate(x,y);
	Line::translate(x,y);
}