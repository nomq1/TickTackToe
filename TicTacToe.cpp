
#include <iostream>
#include "TicTacToe.h"
using namespace std;



    TicTacToe::TicTacToe()
    {
       this->size=0;
    }
    TicTacToe::TicTacToe(int inputsize)
    {
        this->size=inputsize;
        this->bo=*(new Board(inputsize));
    }

    void TicTacToe::play(Player& X, Player& O)
    {
        Point p;





    }
    Player& TicTacToe::winner() const //return player.name()
    {

       return *(this->win);
    }

    Board TicTacToe::board() const
    {
        return this->bo;
    }

    int TicTacToe::getsize()
    {
        return this->size;
    }

    

