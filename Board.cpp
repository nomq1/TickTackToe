#include "Board.hpp"
#include <iostream>
#include <exception>
#include "IllegalCoordinateException.hpp"
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
         int s=(this->size);
         int num=(po.x)*size; 
         return this->board[num+po.y];     
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
    //    throw IllegalCoordinateException(c);
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


   
