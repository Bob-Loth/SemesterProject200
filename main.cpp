

#include <iostream>
//#include "Pokemon.cpp"
#include "Pokemon.h"
using namespace std;
int main() {
    Pokemon p1;
    Pokemon p2;
 
if(p1.spd>=p2.spd) {
    
    while(1) {
            //printf ("Player %d, it is your turn, choose an attack: \n", i);
                cout<<"Player 1 it is your move, choose an attack: \n";
                int atkChoice1;
                int atkChoice2;
                cout<<"1. "<<p1.movelist[0].atkName<<"\n";
                cout<<"2. "<<p1.movelist[1].atkName<<"\n";
                cout<<"3. "<<p1.movelist[2].atkName<<"\n";
                cout<<"4. "<<p1.movelist[3].atkName<<"\n";
                cin>>atkChoice1;
                string opp_type2 = p2.getType();
                double dmg1=p1.MakeAttack(p1.movelist[atkChoice1-1], opp_type2);
                p2.TakeDamage(dmg1);
                cout<<"\nPlayer 1 Health: "<<max(p1.hp,0)<<"\n";
                cout<<"Player 2 Health: "<<max(p2.hp,0)<<"\n\n";
                if(p2.hp<=0) {break;}
        
                cout<<"Player 2 it is your move, choose an attack: \n";
                cout<<"1. "<<p2.movelist[0].atkName<<"\n";
                cout<<"2. "<<p2.movelist[1].atkName<<"\n";
                cout<<"3. "<<p2.movelist[2].atkName<<"\n";
                cout<<"4. "<<p2.movelist[3].atkName<<"\n";
                cin>>atkChoice2;
                string opp_type1=p1.getType();
                double dmg2=p2.MakeAttack(p2.movelist[atkChoice2-1], opp_type1);
                p1.TakeDamage(dmg2);
                cout<<"\nPlayer 1 Health: "<<max(p1.hp,0)<<"\n";
                cout<<"Player 2 Health: "<<max(p2.hp,0)<<"\n\n";
                if(p1.hp<=0) {
                    break;
                }
    }
    if(p2.hp<=0) {cout<<"Player 1 is the winner\n"; }
    if(p1.hp<=0) {cout<<"Player 2 is the winner\n"; }
    
}

else if (p2.spd>p1.spd) {
        
        while(1) {
            //printf ("Player %d, it is your turn, choose an attack: \n", i);
            
            cout<<"Player 2 it is your move, choose an attack: \n";
            int atkChoice1;
            int atkChoice2;
            cout<<"1. "<<p2.movelist[0].atkName<<"\n";
            cout<<"2. "<<p2.movelist[1].atkName<<"\n";
            cout<<"3. "<<p2.movelist[2].atkName<<"\n";
            cout<<"4. "<<p2.movelist[3].atkName<<"\n";
            cin>>atkChoice2;
            string opp_type1 = p1.getType();
            double dmg2=p2.MakeAttack(p2.movelist[atkChoice2-1], opp_type1);
            p2.TakeDamage(dmg2);
            cout<<"\nPlayer 1 Health: "<<max(p1.hp,0)<<"\n";
            cout<<"Player 2 Health: "<<max(p2.hp,0)<<"\n\n";
            if(p1.hp<0) {break;}
            
            cout<<"Player 1 it is your move, choose an attack: \n";
            cout<<"1. "<<p1.movelist[0].atkName<<"\n";
            cout<<"2. "<<p1.movelist[1].atkName<<"\n";
            cout<<"3. "<<p1.movelist[2].atkName<<"\n";
            cout<<"4. "<<p1.movelist[3].atkName<<"\n";
            cin>>atkChoice1;
            string opp_type2=p2.getType();
            double dmg1=p1.MakeAttack(p1.movelist[atkChoice1-1], opp_type2);
            p2.TakeDamage(dmg1);
            cout<<"\nPlayer 1 Health: "<<max(p1.hp,0)<<"\n";
            cout<<"Player 2 Health: "<<max(p2.hp,0)<<"\n\n";
            if(p2.hp<=0) {break;}
            }
        
    if(p2.hp<=0) {cout<<"Player 1 is the winner\n"; }
    if(p1.hp<=0) {cout<<"Player 2 is the winner\n"; }
}
        
}

