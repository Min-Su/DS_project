#ifndef __DATATYPE_H__
#define __DATATYPE_H__

#define MAX_SIZE 100

//Stack Type scope
template <class T>
class Stack {
private:
	int top;
	T stack[MAX_SIZE];
public:
	Stack();
	bool is_empty();
	bool is_full();
	void push(T element);
	T pop();
	T peek();
};

/*Stack implementation start
because 'Error LNK 2019' arise */

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
		T e;
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

//LinkedList scope

typedef struct ListNodeType {
	int data;
	struct ListNodeType *link;
}ListNodeType;

class LinkedList {
private:
	ListNodeType *phead;
	int count;
public:
	LinkedList();
	ListNodeType* createNode(int data);
	void add_Node(int data);
	int node_delete(int data);
	ListNodeType* node_search(int data);
	void display_node();
};

#endif