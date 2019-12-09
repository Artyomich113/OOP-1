#include "Point.h"
#include <math.h>


Point::Point(float x0, float y0, Color* color)
{
	x = x0;
	y = y0;
	this->colorP = *color;
}

Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}

void Point::translate(float dx, float dy)
{
	x += dx;
	y += dy;
}

float Point::distPoint(Point p)
{
	float distance = sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
	//std::cout << " distance between " << x << "," << y << " and " << p.x << "," << p.y << "=" << distance;
	return distance;
}

float Point::distLine(Line line)
{
	Point p1(line.x0, line.y0), p2(line.x1, line.y1);
	return vect(p1, p2) / p1.distPoint(p2);
}

float Point::distsqr(Point p)
{
	return pow(x - p.x, 2) + pow(y - p.y, 2);
}

float Point::vect(Point p1, Point p2)
{
	Point v1(p1.x - x, p1.y - y), v2(p2.x - x, p2.y - y);

	return abs(v1.x * v2.y - v1.y * v2.x);
}

Point * Point::operator=(Point point)
{
	x = point.x;
	y = point.y;

	colorP.r = point.colorP.r;
	colorP.g = point.colorP.g;
	colorP.b = point.colorP.b;

	return this;
}

Point::Point()
{
	x = 0;
	y = 0;
}


Point::~Point()
{
}
