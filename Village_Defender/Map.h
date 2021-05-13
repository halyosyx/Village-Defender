#pragma once
const int MAX_VILLAGERS = 3;
const int MAX_MONSTERS = 3;
class Map
{
private:
	static Map* m_pInstance;
	Map();
public:
	static Map* GetInstance();
	~Map();

	int addMonsters(int M);
	int addVillagers(int x, int y, int villager);
	class Object* get(int x, int y);
	void render();
	

private:
	int mVillagers[MAX_VILLAGERS];
	int mMonsters[MAX_MONSTERS];
	class Object* nGrid[10][10];
	char map[10][10];
	Village mVillages[MAX_VILLAGERS];
	friend class Village;
};

