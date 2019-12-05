#include <iostream>

/*
файлы для лаб кроме source, для кажного хедера есть cpp
1-
2- Matrix.h
3- Cstring.h
4- Shape.h, Triangle.h, Square.h, Circle.h, TwoDShape.h, ThreeDShape.h - в следующей лабе появилось несколько абстрактных классов между Shape и фигурами, работают все так же,ведь реализация интерфейса ни куда не делась 
5- Shape.h, Triangle.h, Square.h, Circle.h, TwoDShape.h, ThreeDShape.h

*/

#define LAB 6

#if LAB == 2
#include "Matrix.h"
#endif
#if LAB ==3
#include "Cstring.h"
#endif
#if LAB ==4 || LAB ==5
#include "Shape.h"
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
#endif
#if LAB == 6
#include "Point.h"
#include "Line.h"
#include "Color.h"
#include "SquareEXT.h"
#endif // LAB == 6

#if LAB ==4 || LAB ==5
bool GlIntersect(Shape *ob1, Shape *ob2); //заранее декларация функции
#endif

int main()
{
#if LAB == 1
	char line[] = "1"; // сообщения выхода
	char* str = new char[50]; // выделение памяти для массива символов

	do
	{
		std::cin >> str;

		char * ptr = str; // вспомогающий указатель на символ
		while (*ptr != '\0') //пока символ не дошел до нуль симнова
		{
			*ptr = tolower((int)*ptr); //перевод символа в нижний регистр
			ptr++; // идем к следующему символу
		}
		std::cout << str << std::endl;
		
		ptr = str;
		while (*ptr != '\0')
		{
			std::cout << std::hex << (int)*ptr << " ";
			
			ptr ++; //идем к следующему символу
		}
		std::cout << std::endl; 

		ptr = str;
		while (*ptr != '\0')
		{
			std::cout << std::oct << (int)*ptr << " ";

			ptr++; //идем к следующему символу
		}
		std::cout << std::endl;

	} while (strcmp(str, line) != 0); //пока ввод не будет равен статическому массиву Line

	delete[] str;
#endif
#if LAB == 2
	Matrix * mat1 = new Matrix(3,3);// используем конструктор с параметрами(строки, столбцы)
	mat1->Input(); // ввод матрицы
	Matrix * mat2 = new Matrix(*mat1);// используем конструктор копирования
	Matrix * mat3 = new Matrix(3,3);

	mat1->Mul(mat2,mat3); //результат умножения записывается в mat3 , такой же "интерфейс" для сложения
	mat3->Print();

#endif 
#if LAB == 3
	Cstring * str = new Cstring(),* str2 = new Cstring();
	std::cin >> str; //используется перегруженный оператор ввода
	std::cin >> str2;
	*str += *str2;
	std::cout << *str + *(*str += *str) << std::endl; // используется перегруженный оператор вывода
	delete str;
	delete str2;
#endif
#if LAB == 4
	//Shape * triamgle = new Triangle();
	Shape * square = new Square(2,3);
	Shape * circle = new Circle(3);
	
	GlIntersect(square,circle);
	//delete triamgle;
	delete square;
	delete circle;
#endif
#if LAB == 5
	Shape * square = new Square(2, 3);
	Shape * circle = new Circle(3);
	Shape * triangle = new Triangle(3,2,4);
	
	square->print();
	circle->print();
	triangle->print();

	delete triangle;
	delete square;
	delete circle;
#endif
#if LAB == 6
	Color * color = new Color(0.5f,0.5f,0.5f);
	Point * center = new Point(1.0f,1.0f,color);
	Line * line = new Line(2.0f,2.0f,2.0f,0.0f,color);
	SquareEXT * square = new SquareEXT(center,line,color);
	square->print();
	square->translate(-5,-5);
	square->print();
	delete color;
	delete center;
	delete square;
	delete line;
#endif // LAB == 6


	system("pause");
	return 0;
}