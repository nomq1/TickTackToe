#include "Board.hpp"
#include <iostream>



using namespace std;

    Board::Board() //ok
    {
        this->size=0;
        char board[NULL][NULL];
    }


    Board::Board(int inputsize) //ok
    {
        this->size=inputsize;
        
        this->board=new char[inputsize*inputsize];
        for(int i=0;i<size*size;i++)
        {          
            board[i]='.';

        }
        
    }

   char Board::getValue(int M, int N)
     {
         int s=(this->size);
         int num=M*size; 
         return this->board[num+N]; 
     }

    char& Board::operator[](Point po) //ok
     { 
    int size_board = po.x * size + po.y; 
    if ( size_board < 0||size*size <= size_board)
	{
		throw IllegalCoordinateException(po.x,po.y);
	}
         return this->board[size_board];     
     }



    ostream& operator<<(ostream& out,Board &b){
    for(int i=0;i<b.size;i++)
    {    
        for(int j=0;j<b.size;j++)
        {
         out<<b.getValue(i,j);
        }
        out<<"\n";
    } 
    return out;
    }
    void Board::operator=(char c){

    for(int i=0;i<size;i++)
    {    
        for(int j=0;j<size;j++)
        {
        Point p(i,j);  
         if(c!='.')
         {
       //    throw IllegalCharException(p.x , p.y);
         }
         else
         {
             board[p.x*size+p.y]=c;
         }
        }
    }

      
 
    }


    Board::~Board()
    {
        cout<<"";
    } 

