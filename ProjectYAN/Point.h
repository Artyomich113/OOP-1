#pragma once
#include "Color.h"

class Point
{
	float x;
	float y;
	Color color;
public:
	float getX();
	void setX(float);
	float getY();
	void setY(float);
	Point(float,float,Color);
	void translate();
	Point();
	~Point();
};

