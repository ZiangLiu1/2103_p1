#include <iostream>
#include "Player.h"
using namespace std;

class Human:public Player{
    public:
    Human(){
        string name="Human";
    };
    char makeMove(char m);
    char getMove();
};