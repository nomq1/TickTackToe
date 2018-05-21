#pragma once

#include <string>
#include "Board.h"
using Coordinate=Point;

class Player{
    private:

    public:
    char myChar; //save the player char: X or O
    char getChar(){ return myChar; }
    char getC(){return myChar;}
    void setChar(char c){myChar = c;}

    virtual const string name() const=0;
	virtual const Coordinate play(const Board& board)=0;
};
