#ifdef __VIRTUALMANAGER_H__
#define __VIRTUALMANAGER_H__

class Manager {
public:
	virtual void menu() = 0;
	virtual void input_Number() = 0;
	virtual void run() = 0;
}

#endif
