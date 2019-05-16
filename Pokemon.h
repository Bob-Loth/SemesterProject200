#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <cstdlib>
#include <map>
#include <unordered_map>

using namespace std;
class Pokemon
{
public:
    Pokemon();
    ~Pokemon();
    unordered_map<string, double> TypeMap;
    //in order :atkType, multiplier
    //try either this approach, or create a double-nested map for all pokemon to share.
    struct Move {
        string atkName;
        double pwr;
        double acc;
        string atkType;
    };
    string getType();
    string pkmnType;
    int hp;
    int atk;
    int def;
    int spd;
    
    Move movelist[4];
    //virtual void passiveEffect() = 0;
    double MakeAttack(Move attack, string opp_type);
    void TakeDamage(double);
};
#endif

 /* Pokemon_hpp */

