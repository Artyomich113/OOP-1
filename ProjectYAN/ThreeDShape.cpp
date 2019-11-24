#include "ThreeDShape.h"



ThreeDShape::ThreeDShape()
{
}


ThreeDShape::~ThreeDShape()
{
}

float ThreeDShape::volume()
{
	return area() * Height;
}

