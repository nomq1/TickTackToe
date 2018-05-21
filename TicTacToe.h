
#include <iostream>
#include "DummyPlayers.h"
#include "Board.h"
using namespace std;


class TicTacToe{

    private:
    int size;
    bool WinTest(Player& p);

    public:
    Board bo;
    Player* win;
    TicTacToe(int inputsize);
    void play(Player& Xplayer, Player& Oplayer);
    Player& winner() const;
    Board board() const;
    int getsize();

    
};







