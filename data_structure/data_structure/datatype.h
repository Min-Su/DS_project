#ifndef __DATATYPE_H__
#define __DATATYPE_H__

#define MAX_SIZE 100

class Stack {
private:
	int top;
	int stack[MAX_SIZE];
public:
	Stack();
	bool is_empty();
	bool is_full();
	void push(int element);
	int pop();
	int peek();
};

#endif