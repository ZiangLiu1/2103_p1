#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include <iostream>
using namespace std;

class Referee{
    public:
    Referee(){};
    Player play(Human p1,Computer p2);
};