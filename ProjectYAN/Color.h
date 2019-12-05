#pragma once
#include <iostream>

struct Color
{
	float r, g, b;
	Color(float r, float g, float b)
	{
		this->r = r;
		this->g = g;
		this->b = b;
	}
	Color()
	{
		this->r = 0;
		this->g = 0;
		this->b = 0;

	}
	void Equals(Color *color)
	{
		r = color->r;
		g = color->g;
		b = color->b;
	}

	void print()
	{
		std::cout << r << " " << g << " " << b << std::endl;
	}
};