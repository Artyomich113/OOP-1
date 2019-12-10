#include "Stack2.h"

template <typename T>
Stack<T>::Stack()
{
	top = nullptr;
	len = 0;
}

template <typename T>
Stack<T>::Stack(const Stack<T> & otherStack)
{
	data<T> * b = otherStack.top;
	while (b)
	{
		this.push(b);
		b = b->nextptr;
	}
}

template <typename T>
Stack<T>::~Stack()
{
	while (top)
	{
		data<T> * del = top;
		delete del->val;
		top = top->nextptr;
		delete del;
	}
}

template<typename T>
void Stack<T>::operator+=(T ob)
{
	data<T> * new_el = new data<T>;
	new_el->val = ob;
	len++;
	new_el->nextptr = top;
	top = new_el;
}

template<class T>
void Stack<T>::operator--()
{
	pop();
}

template <class T> void Stack<T>::push(const T &a)
{
	len++;
	data<T> * new_el = new data<T>;
	new_el->val = a;
	if (!top)
	{
		top = new_el;
		top->nextptr = nullptr;
	}
	else
	{
		new_el->nextptr = top;
		top = new_el;
	}
};


template <typename T>
T* Stack<T>::pop()
{
	if (!len) return T();
	len--;
	T* to_return = top->val;
	data<T>* to_del = top;
	top = top->nextptr;
	delete to_del;
	return to_return;
}

template <typename T>
void Stack<T>::print()
{
	data<T> * b = top;
	while (b)
	{
		std::cout << "\n" << *b->val;
		b = b->nextptr;
	}
}

// вернуть размер стека
template <typename T>
int Stack<T>::Size()
{
	return len;
}

// вернуть указатель на стек (для конструктора копирования)
template <typename T>
data<T> * Stack<T>::Top()
{
	return top;
}
