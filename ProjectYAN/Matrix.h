#pragma once
class Matrix
{

public:
	float ** elem;
	int columns;
	int rows;

	void Sum(Matrix*,Matrix *&);
	void Print();
	void Fill(float);
	void Input();
	void Mul(Matrix *,Matrix *&);
	void Resize(int,int);
	Matrix(int,int); //конструкторы с параметрами
	Matrix(int, int,int**);
	Matrix();//конструктор по уумолчанию
	Matrix(const Matrix&);// конструктор копирования
	~Matrix();// деструктор
};

