#include "pch.h"
#include "Object.h"
#include "Village.h"
#include "Map.h"
#include <iostream>
using namespace std;
int main()
{

	Map::GetInstance()->addVillagers(0,1,1);
	Map::GetInstance()->addVillagers(4, 3, 1);
	Map::GetInstance()->addVillagers(8, 3, 1);

	Map::GetInstance()->render();

}
