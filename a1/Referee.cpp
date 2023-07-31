#include <iostream>
#include "Referee.h"
using namespace std;

Player Referee::play(Human p1,Computer p2){
    std::cout<<"Enter move:";
    std::cin>>Human.move;
    if(Human.move=="P"){
        std::cout<<Human.name<<" Wins"<<std::endl;
    }
    else if(Human.move=="S"){
        std::cout<<"Computer Wins"<<std::endl;
    }
    else if(Human.move=="R"){
        std::cout<<"It's a Tie."<<std::endl;
    }    
}