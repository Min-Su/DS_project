#include<iostream>
using namespace std;

#include"datatype.h"

Stack::Stack() {
	this->top = -1;
}

bool Stack::is_empty() {
	if(this->top == -1)
		return true;
	else
		return false;
}

bool Stack::is_full() {
	if(this->top == MAX_SIZE - 1)
		return true;
	else
		return false;
}

void Stack::push(int element) {
	if(is_full()) {
		cout << "Stack is full" << endl;
	}
	else {
		this->top++;
		this->stack[top] = element;
	}
}

int Stack::pop() {
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

int Stack::peek() {
	if(is_empty()) {
		cout << "Stack is empty" << endl;
	}
	else
		return this->stack[this->top];
}