#include "pch.h"
#include "Village.h"
#include <iostream>
using namespace std;

Village::Village()
{
	mtype = 'v';
}
Village::~Village()
{
}
int Village::set(int x, int y)
{
	mPosX = x; 
	mPosY = y; 
	return 0;
}
char Village::getType()
{
	return mtype;
}
int Village::getDisplay()
{

	return mVillagers;
}
