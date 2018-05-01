#include <iostream>
#include "Point.hpp"
using namespace std;



class Board{
 
   public:
        int size;
        char *board;
        Board();
        Board(int inputsize);
        char getValue(int M, int N);   
        char& operator[](Point po);
        friend ostream& operator<<(ostream& out, Board &b); 
        ~Board();  

};
