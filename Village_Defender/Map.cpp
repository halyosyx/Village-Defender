#include "pch.h"
#include "Map.h"
#include "Village.h"
#include "Object.h"
#include <iostream>

Map* Map::m_pInstance = nullptr;
using namespace std;
Map::Map()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			nGrid[i][j] = nullptr;
			if (i == 0)
			{
				nGrid[i][]
			}
		}

	}
	/*char map[10][10] =
	{
		"=================",
		"|               |",
		"|               |",
		"|               |",
		"|               |",
		"|               |",
		"|               |",
		"=================",
	};*/

	/*for (int i = 0; i < 20; i++)
	{
		cout << map[i] << endl;
	}*/
}

Map* Map::GetInstance()
{
	if (m_pInstance == nullptr)
	{
		m_pInstance = new Map();
	}
	return m_pInstance;
}
Map::~Map()
{
}
int Map::addVillagers(int x, int y, int villager)
{
	Village *pVillager = new Village();
	pVillager->set(x, y);
	mVillagers[0] = pVillager;

	map[i][j] = pVillager->getType();
	nGrid[x][y] = pVillager;
	return 0;
}
void Map::render()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (nGrid[i][j] != nullptr)
			{
				cout << nGrid[i][j]->getType();
			}
			else
				cout << " ";
			
		}
		cout << endl;
	}
}
