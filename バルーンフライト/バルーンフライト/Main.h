#ifndef MAIN_H
#define	MAIN_H

#include"MNMainApp.h"

class Main:public MNMainApp
{
public:
	Main() {}
	~Main() {}

	void Init();
	bool MainLoop();
};

#endif