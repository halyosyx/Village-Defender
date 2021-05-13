#pragma once
#include "Object.h"
class Village :
	public Object
{
private:
	int mVillagers;
public:
	Village();
	~Village();

	int set(int x, int y) ;
	 char getType();
	 int getDisplay();

	 friend class Map;
};