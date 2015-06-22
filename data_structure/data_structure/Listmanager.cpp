#include"Listmanager.h"

Listmanager::Listmanager() {
	this->input = 0;
}

void Listmanager::input_Number() {
	cin >> this->input;
}

void Listmanager::menu() {
	cout << "1. Insert Node in List" << endl;
	cout << "2. Delete Node in List" << endl;
	cout << "3. Search Node in List" << endl;
	cout << "4. Display List" << endl;
	cout << "5. Back" << endl;
	cout << "Input Number >>" << endl;
}

void Listmanager::run() {
	
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
				break;

			default :
				cout << "Input is unavailable" << endl;
				break;
		}
	}

	
}