#include "Board.h"
#include <iostream>
using Coordinate=Point;

using namespace std;

    Node::Node()
    {
        this->ch='.';
    }

    Node::Node(char c)
    {
       this->setch(c);
    }

    char Node::getch()
    {
        return this->ch;
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

    Node::~Node()
    {

    }

    Board::Board() //ok
    {
       
    }

     int Board::size()const
    {
        return (this->size);
    }

    Board::Board(int inputsize) //ok
    {
        this->size=inputsize;   
        this->board=new Node[inputsize*inputsize];
        for(int i=0;i<size()*size();i++)
        {          
            board[i]='.';
        }
        
    }

   

   char Board::getValue(int M, int N)
     {
         int s=(this->size);
         int num=M*size(); 
         return this->board[num+N].ch; 
     }

    Node& Board::operator[](Point po) //ok
     { 
    int size_board = po.x * size() + po.y; 
    if ( size_board < 0||size()*size() <= size_board)
	{
		throw IllegalCoordinateException(po.x,po.y);
	}
         return this->board[size_board];
     }

     char Board::operator[](Point po) const
     {
         int x=po.x;
         int y=po.y;
         int num=x*size();
         return this->board[num+y].ch;

     }
     



    void Board::operator=(char c){
 
     for(int i=0;i<size()*size();i++)
        {          
            this->board[i].setch(c);
        }
    }

  ostream& operator<<(ostream& out,const Board &b)
  {
    for(int i=0;i<b.size;i++)
    {    
        for(int j=0;j<b.size;j++)
        {
         out<<b.board[i*b.size+j].ch;
        }
        out<<"\n";
    } 
    return out;
    }

void Board::deleteB()
{
      delete[] this->board;
   
}

    void Board::operator=(const Board& b)
    {
        if(this == &b){
            return;
    }
        if(b.size!=this->size)
        {
            deleteB();
            this->size = b.size;
            int n=b.size;
            this->board=new Node(b.size*b.size);
        }
        
        for(int i=0;i<b.size*b.size;i++)
        {        
            this->board[i].setch(b.board[i].getch());
        }
        }
    

    Board::~Board()
    {
        cout<<"";
       
    }
    
       

 
