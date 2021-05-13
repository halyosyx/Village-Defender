#pragma once
#include "Object.h"
class Border :
	public Object
{
private:
	char mBorder;
public:
	Border();
	~Border();

	int set(int x, int y);
	char getType() { return mtype; };
	int getDisplay() { return 0; };

};

