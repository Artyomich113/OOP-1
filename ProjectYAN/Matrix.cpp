#include "Matrix.h"
#include <iostream>


Matrix::Matrix()
{
	//pepehands, я никому не нужен
	rows = 0;
	columns = 0;
	elem = nullptr;
}


void Matrix::Sum(Matrix *mat2, Matrix *&matres)
{
	if(columns != mat2->columns || rows != mat2->rows) //если матрицы разного размера
		return;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matres->elem[i][j] += this->elem[i][j] + mat2->elem[i][j];
		}
	}
}

void Matrix::Print()// вывод
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << elem[i][j] << " ";
		}

		std::cout << std::endl;
	}
}

void Matrix::Fill(float value) //заполнение каким-то значением
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			elem[i][j] = value;
		}
	}
}

void Matrix::Input()// ввод вручную
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << "elem["<< i << "][" << j << "] =";
			std::cin >> elem[i][j];
		}
		std::cout << std::endl;
	}
}

void Matrix::Mul(Matrix *mat2, Matrix *& matres)
{
	if(this->columns != mat2->rows) // если столбцы первого не равны строкам второго
		return;

	int newrows = columns;
	int newcolumns = mat2->rows;

	if (newrows != matres->rows || newcolumns != matres->columns) //изменение размера по необходимости
	{
		matres->Resize(newrows,newcolumns);
	}

	// полная дичь, кароче алгоритм умножения матриц
	for (int i = 0; i < newrows; i++)
	{
		for (int j = 0; j < newcolumns; j++)
		{
			matres->elem[i][j] = 0;
			for (int k = 0; k < newcolumns; k++)
			{
				matres->elem[i][j] += this->elem[i][k] * mat2->elem[k][j];
			}
		}
	}
}

Matrix::Matrix(int rows, int columns)
{
	this->rows = rows;
	this->columns = columns;

	// алокация 
	elem = new float*[rows];
	for (int i = 0; i < rows; i++)
	{
		elem[i] = new float[columns];
	}
}

Matrix::Matrix(int rows, int columns, int** source)
{
	this->rows = rows;
	this->columns = columns;

	elem = new float*[rows];
	for (int i = 0; i < rows; i++)
	{
		elem[i] = new float[columns];
	}

	//коппирование из какого-то двумерного массива
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			elem[i][j] = source[i][j];
		}
	}
}



void Matrix::Resize(int columns, int rows)//удаление двумерного массива и его алокация в памяти
{
	delete[] elem;

	this->columns = columns;
	this->rows = rows;
	
	elem = new float*[rows];
	for (int i = 0; i < rows; i++)
	{
		elem[i] = new float[columns];
	}
}

Matrix::Matrix(const Matrix &ob) // алокация и копия данных
{
	columns = ob.columns;
	rows = ob.columns;

	elem = new float*[rows];
	for (int i = 0; i < rows; i++)
	{
		elem[i] = new float[columns];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			elem[i][j] = ob.elem[i][j];
		}
	}
}
Matrix::~Matrix()
{
	delete[] elem;
}
