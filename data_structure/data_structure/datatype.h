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