#include<iostream>
#include "Player.h"
usingnamespace std;

class Human:public Player{
    public:
    Human(string name="Human");
    char makeMove();
}