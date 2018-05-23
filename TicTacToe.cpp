
#include <iostream>
#include "TicTacToe.h"
using namespace std;

 
    TicTacToe::TicTacToe(int inputsize):bo(inputsize)
    {
     
    }

  
    void TicTacToe::play(Player& Xplayer, Player& Oplayer)
    {
        bo='.';
        Xplayer.setChar('X');
        Oplayer.setChar('O');
        int count=0;     
        while(count!=(bo.size())*(bo.size()))
        {
            try
            {
            Point p=Xplayer.play(bo);
            if(bo[p]=='.')
            {
                bo[p]=Xplayer.getChar();
            }
            else
            {
                win=&Oplayer;
                return;
            }
            }
            catch(const string& ex) 
            //if throw exception- the player out of the game and the second player winning.
            {
                win=&Oplayer;
                return;
            }
            if(WinTest(Xplayer))
            {
                win=&Xplayer;
                return;
            }
            count++;
            if(count<bo.size()*bo.size())
            {
                try
                {
                Point p=Oplayer.play(bo);
                if(bo[p]=='.')
                {
                    bo[p]=Oplayer.getChar();
                }
                else
                {
                    win=&Xplayer;
                    return;
                }
                }
                catch(const string& ex) 
                //if throw exception- the player out of the game and the second player winning.
                {
                    win=&Xplayer;
                    return;
                }
                if(WinTest(Xplayer))
                {
                    win=&Oplayer;
                    return;
                }
                count++;
            }
        }
    }
    
    
    bool TicTacToe::WinTest(Player& p) 
    {
        bool b=true;
        for(int i=0;i<bo.size();i++)
        {
            b=true;
            for(int j=0;j<bo.size();j++) //test the first row {00,01,02,03..}
            {
                if(bo[{i,j}]!=p.getC())
                {
                    b=false;
                    break;
                }
            }
            if(b==true)
            {
                return true;
            }
            b=true;
            for(int j=0;j<bo.size(); j++)//test the first coulmn{00,10,20,30...}
            {
                if(bo[{j,i}]!=p.getChar())
                {
                    b=false;
                    break;
                }

            }
            if(b==true)
            {
                return true;
            }
            b=true;
            for(int i = 0; i< bo.size() ; i++) //test the diagonals
            {
                if(bo[{bo.size()-i-1,i}] != p.getChar())
                {
                    b = false;
                    break;
                }
            }
            if(b == true) return true;
            return false;
        }
        return true;
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

    

