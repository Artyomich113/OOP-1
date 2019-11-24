#include <iostream>

#define LAB 5

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

int main()
{
#if LAB == 1
	char line[] = "1"; // ��������� ������
	char* str = new char[50]; // ��������� ������ ��� ������� ��������

	do
	{
		std::cin >> str;

		char * ptr = str; // ������������ ��������� �� ������
		while (*ptr != '\0') //���� ������ �� ����� �� ���� �������
		{
			*ptr = tolower((int)*ptr); //������� ������� � ������ �������
			ptr++; // ���� � ���������� �������
		}
		std::cout << str << std::endl;
		
		ptr = str;
		while (*ptr != '\0')
		{
			std::cout << std::hex << (int)*ptr << " ";
			
			ptr ++; //���� � ���������� �������
		}
		std::cout << std::endl; 

		ptr = str;
		while (*ptr != '\0')
		{
			std::cout << std::oct << (int)*ptr << " ";

			ptr++; //���� � ���������� �������
		}
		std::cout << std::endl;

	} while (strcmp(str, line) != 0); //���� ���� �� ����� ����� ������������ ������� Line

	delete[] str;
#endif
#if LAB == 2
	Matrix * mat1 = new Matrix(3,3);// ���������� ����������� � �����������(������, �������)
	mat1->Input(); // ���� �������
	Matrix * mat2 = new Matrix(*mat1);// ���������� ����������� �����������
	Matrix * mat3 = new Matrix(3,3);

	mat1->Mul(mat2,mat3); //��������� ��������� ������������ � mat3 , ����� �� "���������" ��� ��������
	mat3->Print();

#endif 
#if LAB == 3
	Cstring * str = new Cstring(),* str2 = new Cstring();
	std::cin >> str;
	std::cin >> str2;
	*str += *str2;
	std::cout << *str + *(*str += *str);
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
	
	square->print();
	circle->print();

	delete square;
	delete circle;
#endif

	system("pause");
	return 0;
}