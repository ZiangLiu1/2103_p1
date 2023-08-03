#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
public:
    Human(std::string name = "Human"); // Constructor with default name "Human"
    char makeMove() override;
};

#endif // HUMAN_H
