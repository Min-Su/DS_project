#include<iostream>
#include<string>

using namespace std;

#include"Stackmanager.h"


Stackmanager::Stackmanager() {
	this->input = 0;
}

void Stackmanager::menu() {
	cout << "1. Bracket Test" << endl;
	cout << "2. Maze Search" << endl;
	cout << "3. Back" << endl;
	cout << "Input Number >>" << endl;
}

void Stackmanager::input_Number() {
	cin >> this->input;
}

void Stackmanager::checkmatching(string expr) {
	int i = 0;
	char open_ch, ch;
	Stack<char> *stack = new Stack<char>();
	while(expr[i] != NULL) {
		ch = expr[i];

		switch(ch) {
			case '(' : case '{' : case '[' :
				stack->push(ch);
				break;

			case ')' : case '}' : case ']' :
				if(stack->is_empty()) {
					cout << "Error" << endl;
					return;
				}
				else {
					open_ch = stack->pop();
					if(ch != open_ch) {
						cout << "Bracket not same" << endl;
						return;
					}
					else {}
				}
				break;
		}
	}
	cout << stack->getStack() << endl;
	cout << "올바른 수식입니다. " << endl;
}

void Stackmanager::run() {
	
	while(1) {
		menu();
		input_Number();

		switch(this->input) {
			case 1 : 
				cout << "괄호가 포함된 수식을 입력해주세요 >>";
				cin >> this->str;
				checkmatching(this->str);

			case 2 :
				break;

			case 3 :
				return;
				break;
		}

	}
}