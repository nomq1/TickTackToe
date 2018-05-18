#include <string>
#include "Board.h"
using Coordinate=Point;

class Player{
    private:

    public:
    char myChar; //save the player char: X or O
    char getchar(){ return myChar; }

    virtual const string name() const=0;
	virtual const Coordinate play(const Board& board)=0;
};