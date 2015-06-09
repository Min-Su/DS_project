#include<iostream>
#include<string>

using namespace std;

#include"Stackmanager.h"


Stackmanager::Stackmanager() {
	this->input = 0;
	this->stack = new Stack();
}

void Stackmanager::menu() {
	cout << "1. Bracket Test" << endl;
	cout << "2. Fomula Calculation" << endl;
	cout << "3. Maze Search" << endl;
	cout << "4. Back" << endl;
	cout << "Input Number >>" << endl;
}

void Stackmanager::input_Number() {
	cin >> this->input;
}

void Stackmanager::checkmatching(string expr) {
	int i = 0;
	char ch;
	while(expr[i] != NULL) {
		ch = expr[i];

		switch(ch) {
			case '(' : case '{' : case '[' :
				stack->push(
				break;
		}
	}
}
