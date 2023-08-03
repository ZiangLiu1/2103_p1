#include "Computer.h"

Computer::Computer() : Player("Computer") {}

char Computer::makeMove() {
    return 'R'; // The computer always chooses Rock for simplicity in this assignment
}
