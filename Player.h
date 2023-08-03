#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    Player(std::string name = "Human"); // Constructor with default name "Human"
    virtual char makeMove() = 0;
    std::string getName();

protected:
    std::string name;
};

#endif // PLAYER_H
