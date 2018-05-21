
#include <iostream>
#include "DummyPlayers.h"
#include "Board.h"
using namespace std;


class TicTacToe{

    private:
    int size;

    public:
    Board bo;
    Player* win;
    TicTacToe();
    TicTacToe(int inputsize);

    void play(Player& X, Player& O);
    Player& winner() const;
    Board board() const;
    int getsize();

    
};







