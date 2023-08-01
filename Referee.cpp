#include <iostream>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include "Player.h"
using namespace std;

Player Referee::play(Human p1,Computer p2){
    char m;
    cout<<"Enter move: ";
    cin>>m;
    p1.makeMove(m);
    if(p1.getMove()=='P'){
        cout<<p1.getName()<<" Wins"<<endl;
    }
    else if(p1.getMove()=='S'){
        cout<<"Computer Wins"<<endl;
    }
    else if(p1.getMove()=='R'){
        cout<<"It's a Tie."<<endl;
    }    
}