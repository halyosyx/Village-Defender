#pragma once
class Object
{
protected:
	int mPosX;
	int mPosY;
	char mtype;
public:
	Object();
	~Object();

	int getX();
	int getY();

	virtual char getType() = 0;
	virtual int getDisplay() = 0;
};

