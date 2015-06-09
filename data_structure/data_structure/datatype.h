#ifndef __DATATYPE_H__
#define __DATATYPE_H__

#define MAX_SIZE 100

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
	T* getStack();
};

//LinkedList scope

typedef struct ListNode {
	int data;
	struct ListNode *link;
}ListNode;

class LinkedList {
private:
	ListNode **phead;
	ListNode *p;
public:
	LinkedList();
	void createNode(int data);
};

#endif