#include<iostream>
using namespace std;

#include"UImanager.h"


UImanager::UImanager() {
	this->input = 0;
}

void UImanager::input_Number() {
	cin >> this->input;
}

void UImanager::menu() {
	cout << "1. Stack" << endl;
	cout << "2. List" << endl;
	cout << "3. Queue" << endl;
	cout << "4. Tree" << endl;
	cout << "5. Exit" << endl;
	cout << "Select the Number >>";
}

void UImanager::run() {
	while(1) {
		menu();
		input_Number();

		switch(this->input) {
			case 1 : 
				break;

			case 2 :
				break;

			case 3 :
				break;

			case 4 :
				break;

			case 5 :
				exit(1);
				break;

			default:
				cout << "Input is unavailable" << endl;
				break;
		}
	}
}