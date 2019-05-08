#include "Pokemon.h"



Pokemon::Pokemon()
{
	atk = 50;//placeholder values
	def = 50;
	spd = 50;
	hp = 200;

	string Types[] = { "normal","fire","water","electric","grass","ice", //0-5
					   "fighting","poison","ground","flying","psychic","bug", //6-11
					   "rock","ghost","dragon","dark","steel","fairy" }; //12-17
	for (int i = 0; i < 18; i++) {
		TypeList[Types[i]] = 1.0; //make all effectiveness default
	}
	
	//here is where you could define type effectiveness in derived classes
	//for pkmnType = electric
	TypeList[Types[3]] = 0.5; //electric not very effective
	TypeList[Types[8]] = 2.0; //ground super effective
	TypeList[Types[9]] = 0.5; //flying not very effective
	TypeList[Types[16]] = 0.5; //steel not very effective
	//with this approach, steel type will have 14 lines of this. Not awful, but we might want to think about using a static 2d data structure.


	//example of defining the pokemon's first move, handled in derived class 
	//reformat these with a constructor to cut down on lines
	movelist[0].atkName = "thunderbolt";
	movelist[0].acc = 100;
	movelist[0].atkType = Types[3]; //electric
	movelist[0].pwr = 90;

	movelist[1].atkName = "tackle";
	movelist[1].acc = 100;
	movelist[1].atkType = Types[0]; //normal
	movelist[1].pwr = 60;

	movelist[2].atkName = "thunder";
	movelist[2].acc = 75;
	movelist[2].atkType = Types[3];
	movelist[2].pwr = 110;

	movelist[3].atkName = "iron tail";
	movelist[3].acc = 75;
	movelist[3].atkType = Types[16];
	movelist[3].pwr = 100;
}


Pokemon::~Pokemon()
{
}

double Pokemon::MakeAttack(Move attack)
{
	
	double hitRoll = rand() % 100 + 1.0; //1-100
	if (hitRoll > attack.acc) return 0.0; //miss
	else {
		double randModifier = ((rand() % 16) + 85.0) / 100.0; // .85 to 1.0
		double typeEff = TypeList[attack.atkType]; //look up type effectiveness, not sure how I want to pass the attack's type to the defending pokemon's takeDamage
		double rawDamage = ((42 * attack.pwr / 50) + 2) * randModifier * typeEff;
		return rawDamage;
	}
	
	
}

double Pokemon::TakeDamage(double rawDamage)
{
	return rawDamage / def; //will probably pass attack type to here, then
}
