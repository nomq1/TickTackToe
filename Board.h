#include <iostream>
#include "IllegalCoordinateException.h"
#include "IllegalCharException.h"
#pragma once
using namespace std;

class Node{

        public:
        char ch;
        Node();
        Node(char c);
        void setch(char c);
        Node& operator=(char c);
        operator char()const{
                return ch;
        }
         ~Node();
};

class Board{
 
   public:
        int size;
        Node *board;
        Board();
        Board(int inputsize);
        char getValue(int M, int N);   
        Node& operator[](Point po);
        void operator=(char c);
        friend ostream& operator<<(ostream& out, const Board &b); 
        void deleteB(Node *board);
        void operator=(const Board& b);
        ~Board();  

};

