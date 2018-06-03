#pragma once
#include <iostream>
#include "IllegalCoordinateException.h"
#include "IllegalCharException.h"
#include <fstream>
#include <string>
#include <math.h>
#include <time.h>


static int FileNum = 1; 

struct RGB {
  uint8_t red, green, blue;
public:
  RGB() {}
  RGB(uint8_t red, uint8_t green, uint8_t blue): red(red), green(green), blue(blue) {}
};


using namespace std;


class Node{

        public:
        char ch;
        Node();
        Node(char c);
        char getch();
        void setch(char c);
        Node& operator=(char c);
        operator char()const{
                return ch;
        }
        ~Node();
};

class Board{
 
   public:
        int size_;
        int size()const;
        Node *board;
        Board();
        Board(int inputsize);
        void setsize(int inputsize);
        char getValue(int M, int N);   
        Node& operator[](Point po);
        char operator[](Point po) const;
        void operator=(char c);
        void operator=(const Board& b);
        friend ostream& operator<<(ostream& out, const Board &b);
        friend istream& operator>>(istream& cin,Board &b);
        string draw (const int pix) const;
        void drawTable(RGB* image, int pix) const;
        string getTime()const;
        void deleteB();
      
        ~Board();
        };
