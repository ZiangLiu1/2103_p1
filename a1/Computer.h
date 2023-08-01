#include <iostream>
#include "Player.h"
using namespace std;

class Computer : public Player{
    public:
    Computer(){
        string name="Computer";
        char move='R';
    };
};