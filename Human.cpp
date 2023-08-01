#include <iostream>
#include "Human.h"
using namespace std;

char Human::getMove(){
    return move;
}

char Human::makeMove(char m){
    move=m;
}

char Human::getMove()
{
    return 0;
}
