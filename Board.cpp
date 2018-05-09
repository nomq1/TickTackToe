#include "Board.h"
#include <iostream>


using namespace std;

    Node::Node()
    {
        this->ch='.';
    }

    Node::Node(char c)
    {
       this->setch(c);
    }

    void Node::setch(char c)
    {
    if(c=='X'||c=='O'||c=='.')
        {
        this->ch=c;
        }
    else
        {
            IllegalCharException ex(c);
            throw ex;            
        }
    }

    Node& Node::operator=(char c)
    {
    this->setch(c);
    return *this;
    }


    Board::Board() //ok
    {
        this->size=0;
        Node b[NULL][NULL];
    }

    Board::Board(int inputsize) //ok
    {
        this->size=inputsize;
        
        this->board=new Node[inputsize*inputsize];
        for(int i=0;i<size*size;i++)
        {          
            board[i]='.';

        }
        
    }

   char Board::getValue(int M, int N)
     {
         int num=M*size; 
         return this->board[num+N].ch; 
     }

    Node& Board::operator[](Point po) //ok
     { 
    int size_board = po.x * size + po.y; 
    if ( size_board < 0||size*size <= size_board)
	{
		throw IllegalCoordinateException(po.x,po.y);
	}
         return this->board[size_board];
     }
