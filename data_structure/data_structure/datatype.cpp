#include<iostream>
using namespace std;

#include"datatype.h"


// Stack scope

/*Stack implementation start
because 'Error LNK 2019' arise */

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

//Queue scope

Queue::Queue() {
	this->front = 0;
	this->rear = 0;
}

bool Queue::is_empty() {
	if(this->front == this->rear) {
		return true;
	}
	else {
		return false;
	}
}

bool Queue::is_full() {
	if(this->front == ((this->rear + 1)%MAX_SIZE)) {
		return true;
	}
	else {
		return false;
	}
}

void Queue::enqueue(int item) {
	if(is_full()) {
		cout << "Queue is full" << endl;
		return;
	}
	else {
		this->rear = (this->rear + 1)%MAX_SIZE;
		this->queue[this->rear] = item;
	}
}

int Queue::dequeue() {
	if(is_empty()) {
		cout << "Queue is empty" << endl;
		return 0;
	}
	else {
		this->front = (this->front + 1)%MAX_SIZE;
		return this->queue[this->front];
	}
}

// Tree scope

Binary_Tree::Binary_Tree() {
	this->root = NULL;
	this->count = 0;
	this->parent_stack = new Stack<int>;
}

Binary_Tree::~Binary_Tree() {
	delete parent_stack;
}

Tree_node* Binary_Tree::create_Node(int data, int number) {
	Tree_node *temp;
	temp = new Tree_node();
	
	if(temp == NULL) {
		cout << "Create Error !!! " << endl;
		exit(0);
	}
	else {
		temp->data = data;
		temp->number = number;
		return temp;
	}
}

void Binary_Tree::insert_TreeNode() {
	int data;
	int parent_node;
	Tree_node *p;
	this->count++;
	
	cin >> data;
	if(this->root == NULL) {
		this->root = create_Node(data, this->count);	// this->count == TreeNode Numbering 
	}
	else {
		p = this->root;
		parent_node = this->count;

		while(parent_node != 1) {
			this->parent_stack->push(parent_node/2);	
		}
		
		while(this->parent_stack->top != -1) {
			if(p->left->number == this->parent_stack->pop()) {
				p = p->left;
			}
			else if(p->right->number == this->parent_stack->pop()) {
				p = p->right;
			}
		}

		if((this->count%2) == 0) {
			p->left = create_Node(data, this->count);
		}
		else {
			p->right = create_Node(data, this->count);
		}
	}
}

int Binary_Tree::delete_TreeNode() {
	
	Tree_node *p;
	int parent_node;
	int temp;

	p = this->root;
	parent_node = this->count;

	while(parent_node != 1) {
		this->parent_stack->push(parent_node/2);	
	}
		
	while(this->parent_stack->top != -1) {
		if(p->left->number == this->parent_stack->pop()) {
			p = p->left;
		}
		else if(p->right->number == this->parent_stack->pop()) {
			p = p->right;
		}
	}

	if(p->right->number == this->count) {
		temp = p->right->data;
		delete p->right;
	}
	else {
		temp = p->left->data;
		delete p->left;
	}

	return temp;
}

void Binary_Tree::destroy_Tree(Tree_node *root) {
	if(root) {
		destroy_Tree(root->left);
		destroy_Tree(root->right);
		delete root;
	}
}



