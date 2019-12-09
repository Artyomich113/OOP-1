#pragma once
#include "Color.h"
//#include "Point.h"

class Line
{
public:
	Color colorL;
	float x0,x1,y0,y1;

	void print();
	void translate(float x, float y);
	Line();
	Line *operator=(Line);
	Line(float,float,float,float,Color*color);
	~Line();
};

