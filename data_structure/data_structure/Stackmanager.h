#ifndef __STACKMANAGER_H__
#define __STACKMANAGER_H__

#include"datatype.h"

class Stackmanager {
private:
	int input;
	string str;
public:
	Stackmanager();
	void menu();
	void input_Number();
	void checkmatching(string expr);

	void run();
};

#endif