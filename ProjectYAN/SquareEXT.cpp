#include "SquareEXT.h"

SquareEXT::SquareEXT()
{

}

SquareEXT::SquareEXT(Point * point, Line * line,Color *color)// конструктор, который использует точку и линию для составления квадрата.
{
	//поля точки
	x = point->x;
	y = point->y;
	//поля линии
	x0 = line->x0;
	x1 = line->x1;
	y0 = line->y0;
	y1 = line->y1;
	//цыет квадрата
	this->colorS.Equals(color);
}


SquareEXT::~SquareEXT()
{

}

void SquareEXT::print()
{
	Line line(x0,y0,x1,y1,nullptr);
	std::cout << "center " << x << " " << y << " with the edge of " << distLine(line) * 2 << std::endl;
	// длинна грани равна двойной длинне от центра до линии.

	colorS.print();
}

void SquareEXT::translate(float x, float y)
{
	std::cout << "Translate by (" << x << ";" << y <<")" << std::endl;
	Point::translate(x,y);
	Line::translate(x,y);
}
