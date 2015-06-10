#include<iostream>
using namespace std;

#include"datatype.h"


// Stack scope
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

// LinkedList scope

LinkedList::LinkedList() {
	this->phead = NULL;
	this->count = 0;
}

ListNodeType* LinkedList::createNode(int data) {
	ListNodeType *node;

	node = (ListNodeType*)malloc(sizeof(ListNodeType));

	if(node == NULL) {
		printf("Node Memory Malloc Error \n");
		exit(0);
	}
	node->data = data;
	node->link = NULL;

	return node;
}

void LinkedList::add_Node(int data) {
	ListNodeType *temp;

	temp = this->phead;

	if(temp == NULL) {
		this->phead = createNode(data);
	}
	else {
		while(temp != NULL) {
			if(temp->link == NULL) {
				temp->link = createNode(data);
			}
			else {
				temp = temp->link;
			}
		} 
	}

}

int LinkedList::node_delete(int data) {
	ListNodeType *temp, *before;
	int item;

	if(this->phead == NULL) {
		printf("LinkedList is empty\n");
		return 0;
	}
	else {
		temp = this->phead;

		while(temp != NULL) {
			if(temp->data == data) {
				item = temp->data;
				if(temp->link == NULL) {
					before->link = NULL;
					free(temp);
				}
				else {
					before->link = temp->link;
					free(temp);
				}
			}
			else {
				before = temp;
				temp = temp->link;
			}
		}
		return data;
	}
}

ListNodeType* LinkedList::node_search(int data) {
	ListNodeType *temp;

	if(this->phead == NULL) {
		printf("LinkedList is empty\n");
		return NULL;
	}
	else {
		temp = this->phead;

		while(temp != NULL) {
			if(temp->data == data) {
				break;
			}
			else {
				temp = temp->link;
			}
		}
		return temp;
	}
}

void LinkedList::display_node() {
	ListNodeType *temp;

	if(this->phead == NULL) {
		printf("LinkedList is empty\n");
	}
	else {
		temp = this->phead;

		while(temp != NULL) {
			printf("%d", temp->data);
			if(temp->link != NULL) {
				printf(" - ");
			}
			temp = temp->link;
		}
		printf("\n");
	}
}