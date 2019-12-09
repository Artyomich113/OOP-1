#pragma once
#include "Color.h"
#include "Line.h"

class Point
{
public:
	float x;
	float y;
	Color colorP;
	float distLine(Line);
	float distPoint(Point);
	Point(float,float,Color*);
	Point(float,float);
	void translate(float, float);
	float distsqr(Point);
	float vect(Point ,Point);
	Point *operator=(Point point);
	Point();
	~Point();
};

