#include <iostream>
#include <string>
using namespace std;
class Player{
    protected:
        char move;
        string name;
    public:
        Player(){};
        Player(string n){
            name=n;
        }
        string getName();
        char makeMove(char m);
        char getMove();
};