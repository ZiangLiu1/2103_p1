#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    Player* humanPlayer = new Human("Me");
    Player* computerPlayer = new Computer();

    Referee referee;
    Player* winner = referee.refGame(humanPlayer, computerPlayer);

    delete humanPlayer;
    delete computerPlayer;

    return 0;
}
