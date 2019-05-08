#pragma once
#include <string>
#include <cstdlib>
#include <map>
using namespace std;
class Pokemon
{
public:
	Pokemon();
	~Pokemon();
	map<string, double> TypeList; 
	//in order :atkType, multiplier 
	//try either this approach, or create a double-nested map for all pokemon to share.
	struct Move {
		string atkName;
		double pwr;
		double acc;
		string atkType;
	};
	string pkmnType;
	int hp;
	int atk;
	int def;
	int spd;
	
	Move movelist[4];
	//virtual void passiveEffect() = 0;
	double MakeAttack(Move attack);
	double TakeDamage(double);
};

