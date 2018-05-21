#include <iostream>
#pragma once

#include "IllegalCoordinateException.h"
#include "IllegalCharException.h"

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
        char getValue(int M, int N);   
        Node& operator[](Point po);
        char operator[](Point po) const;
        void operator=(char c);
        friend ostream& operator<<(ostream& out, const Board &b);
        void deleteB();
        void operator=(const Board& b);
        ~Board();
        };
