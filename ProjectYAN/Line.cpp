#include "Line.h"

void Line::print()
{
	std::cout << x0 << "," << y0 << " ; " << x1 << "," << y1 << std::endl;
}

void Line::translate(float x,float y)
{
	x0 += x;
	x1 += x;
	y0 += y;
	y1 += y;
}

Line::Line()
{
	x0 = 0;
	x1 = 0;
	y0 = 0;
	y1 = 0;
}

Line * Line::operator=(Line ob)
{
	x0 = ob.x0;
	x1 = ob.x1;
	y0 = ob.y0;
	y1 = ob.y1;

	this->colorL.Equals(&ob.colorL);
	return this;
}

Line::Line(float x0, float y0, float x1, float y1, Color * color)
{
	this->x0 = x0;
	this->x1 = x1;
	this->y0 = y0;
	this->y1 = y1;

	if (color)
		this->colorL.Equals(color);
}


Line::~Line()
{

}
