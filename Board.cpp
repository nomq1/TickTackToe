
#include <cmath>
#include <string>
#include <iostream>
#include <fstream>
#include "Board.h"

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
        return size_;
    }

    Board::Board(int inputsize) //ok
    {
        this->size_=inputsize;   
        this->board=new Node[inputsize*inputsize];
        for(int i=0;i<size()*size();i++)
        {          
            board[i]='.';
        }
        
    }

   

   char Board::getValue(int M, int N)
     {
         int s=(this->size_);
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
    for(int i=0;i<b.size_;i++)
    {    
        for(int j=0;j<b.size_;j++)
        {
         out<<b.board[i*b.size_+j].ch;
        }
        out<<"\n";
    } 
    return out;
 }

 istream& operator>>(istream& input, Board &b)
 {
     
    string s1;
    int x= sqrt(s1.length());
    b.size_=x;
    cin>>s1;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            b[{i,j}]=s1.at(i);
            cout<<i;
        }
    }   
    return cin;
 }
 


 string Board::draw (const int pix) const //should be completed
 {
     const int dimx=pix, dimy=pix;
     int size=size_;
     string num=to_string(FileNum);
     string name= "board"+num+'.'+'p'+'p'+'m';
     ofstream imageFile(name,ios::out | ios::binary);
     imageFile << "P6" << endl << dimx << " "<< dimy << endl<< 255 <<endl;
     RGB * image = new RGB[pix*pix];
     drawTable(image, pix);
    // for(int i=0; i<size; i++)
    //    {
         //   for(int j=0; j<size; j++)
       //     {
               // if(this->board[{i,j}]=='X')
              //  {
                   // drawX(image, pix_i,pix_j);


             //   }
                //2 function: drewX, drewO
                //IF . -->

     //       }
     //   }

  imageFile.write(reinterpret_cast<char*>(image), 3*dimx*dimy);
  imageFile.close();
  FileNum++;
  return name;
 }

  void Board::drawTable (RGB* im, int pix) const
 {

   int q = pix/size_;
   for(int i=1; i<size_; i++)
   {
       for(int j=0; j<pix; j++)
       {
           im[pix*q*i+j].green = 250;
           im[q*i+j*pix].green= 250;         
       }
   }
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
        if(b.size_!=this->size_)
        {
            deleteB();
            this->size_ = b.size_;
            int n=b.size_;
            this->board=new Node(b.size_*b.size_);
        }
        
        for(int i=0;i<b.size_*b.size_;i++)
        {        
            this->board[i].setch(b.board[i].getch());
        }
        }
    

    Board::~Board()
    {
        cout<<"";
       
    }
