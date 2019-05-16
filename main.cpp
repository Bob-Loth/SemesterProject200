
#include "Pokemon.h"
using namespace std;
int main() {
    Pokemon p1;
    Pokemon p2;
 
    while(1) {
        for(int i=1;i<3;i++){
            printf ("Player %d, it is your turn, choose an attack: \n", i);
            if(i==1) {
                int atkChoice;
                cout<<"1. "<<p1.movelist[0].atkName<<"\n";
                cout<<"2. "<<p1.movelist[1].atkName<<"\n";
                cout<<"3. "<<p1.movelist[2].atkName<<"\n";
                cout<<"4. "<<p1.movelist[3].atkName<<"\n";
                cin>>atkChoice;
                string opp_type = p2.getType();
                double dmg1=p1.MakeAttack(p2.movelist[atkChoice-1], opp_type);
                p2.TakeDamage(dmg1);
                cout<<"\nPlayer 1 Health: "<<p1.hp<<"\n";
                cout<<"Player 2 Health: "<<p2.hp<<"\n\n";
                if(p2.hp<0) {break;}  
            }
            if(i==2) {
                int atkChoice;
                cout<<"1. "<<p2.movelist[0].atkName<<"\n";
                cout<<"2. "<<p2.movelist[1].atkName<<"\n";
                cout<<"3. "<<p2.movelist[2].atkName<<"\n";
                cout<<"4. "<<p2.movelist[3].atkName<<"\n";
                cin>>atkChoice;
                string opp_type=p1.getType();
                double dmg2=p2.MakeAttack(p2.movelist[atkChoice-1], opp_type);
                
                p1.TakeDamage(dmg2);
                cout<<"\nPlayer 1 Health: "<<p1.hp<<"\n";
                cout<<"Player 2 Health: "<<p2.hp<<"\n\n";
            }
        }
        if(p1.hp<=0 | p2.hp<=0) {
            break;
        }
    }
    if(p1.hp<=0) {
        cout<<"Player 2 is the winner\n";
    }
    else {
        cout<<"Player 1 is the winner\n";
    }
}


