#pragma once

#include <cassert> // assert
#include <iostream>
#include <iomanip> // setw

template<class T> struct data
{
	T *val;
	data<T> * nextptr;
};


template <class T> class Stack
{
	int len;
	data<T> * top;
public:
	Stack();
	Stack(const Stack<T> &);
	~Stack();

	void operator +=(T);
	void operator --();
	void push(const T &); 
	T* pop(); 
	void print(); 
	int Size(); 
	data<T> * Top(); 
};