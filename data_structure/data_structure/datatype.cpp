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