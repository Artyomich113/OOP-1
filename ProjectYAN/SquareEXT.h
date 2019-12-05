#pragma once
#include "Point.h"
#include "Line.h"
#include "Color.h"
#include <iostream>

class SquareEXT : public Point,public Line
{
public:
	Color color;
	SquareEXT();
	SquareEXT(Point*, Line*,Color*);
	~SquareEXT();
	void print();
	void translate(float,float);
};

