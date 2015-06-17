#ifndef __UIMANAGER_H__
#define __UIMANAGER_H__

#include"Stackmanager.h"

class UImanager {
private:
	int input;
	Stackmanager *stack;
public:
	UImanager();
	void input_Number();
	void menu();
	void run();
};

#endif