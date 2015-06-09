#include<iostream>
using namespace std;

#include"datatype.h"

template <class T>
Stack<T>::Stack() {
	this->top = -1;
}

template <class T>
bool Stack<T>::is_empty() {
	if(this->top == -1)
		return true;
	else
		return false;
}

template <class T>
bool Stack<T>::is_full() {
	if(this->top == MAX_SIZE - 1)
		return true;
	else
		return false;
}

template <class T>
void Stack<T>::push(T element) {
	if(is_full()) {
		cout << "Stack is full" << endl;
	}
	else {
		this->top++;
		this->stack[top] = element;
	}
}

template <class T>
T Stack<T>::pop() {
	if(is_empty()) {
		cout << "Stack is empty" << endl;
	}
	else {
		int e;
		e = this->stack[this->top];
		this->top--;
		return e;
	}
}

template <class T>
T Stack<T>::peek() {
	if(is_empty()) {
		cout << "Stack is empty" << endl;
	}
	else
		return this->stack[this->top];
}

template <class T>
T* Stack<T>::getStack() {
	return this->stack;
}