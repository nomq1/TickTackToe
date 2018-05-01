<<<<<<< HEAD
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

=======
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

>>>>>>> 71851d128dbe88c4e57541b698dd488dcc4ecd4c
};