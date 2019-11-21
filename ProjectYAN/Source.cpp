#include <iostream>

#define LAB 3

#if LAB == 2
#include "Matrix.h"
#endif
#if LAB ==3
#include "Cstring.h"
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
	std::cin >> str;
	std::cin >> str2;
	*str += *str2;
	std::cout << *str + *(*str += *str);
#endif


	system("pause");
	return 0;
}