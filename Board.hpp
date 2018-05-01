#include <iostream>
#include "Point.hpp"
using namespace std;



class Board{
 
   public:
        int size;
        char *board;
        Board();
        Board(int inputsize);
        char& operator[](Point po);
        friend ostream& operator<<(ostream& out, const Board& b);
        ~Board();  

};