#pragma once
#include <iostream>

using namespace std;

class Monster
{
private:
	string name;
	string type;
	int health;
	int attackStat;

public:
	Monster();
	Monster(string nName, string nType, int nAttackStat);

	string getName();
	string getType();
	int getHealth();
	int getAttackStat();

};

