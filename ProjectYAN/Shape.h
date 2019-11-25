#pragma once

#include <string>
#include <iostream>
#include <math.h>

class Shape
{
public:
	Shape();
	virtual float volume() = 0; // интерфейс расчета объема
	void print(); // вывод площади и объема
	virtual float area() = 0; // интерфейс расчета площади
	virtual ~Shape(); //виртуальный деструктор
	virtual bool intersect(Shape *) = 0;
	virtual std::string name() = 0; // абстрактное имя

};

