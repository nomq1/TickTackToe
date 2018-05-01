#include "Board.hpp"

#include <iostream>
#include<vector>
using namespace std;

    Board::Board()
    {
        this->size=0;
        char board[NULL][NULL];
    }


    Board::Board(int inputsize)
    {
        this->size=inputsize;
        this->board=new char[inputsize*inputsize];
        for(int i=0;i<size*size;i++)
        {
            board[i-1]='.';
        }
    }

    char& Board::operator[](Point po)
     { 
         int s=(this->size);
         int num=(po.x)*size;
         return this->board[num+po.y];     
     }


    ostream& operator<<(ostream& out, const Board& b){
    vector<int> vecRow;
    for (int i = 0; i <(b.size); i++){
        for (int j = 0; j < (b.size); j++){
            Point p(i,j);
          //  out <<*(b.board)[p]; //צריך לסדר את זה!! להכניס את המיקום להדפסה
            out <<"\t";
        }
        out << endl;
    }
    return out;
    }


    Board::~Board()
    {
        cout<<"";
    } 


   

