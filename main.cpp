<<<<<<< HEAD
#include "Board.hpp"
#include <iostream>
using namespace std;

using namespace std;

int main() {
	Board board1{4};  // Initializes a 4x4 board
	cout << board1 << endl;   /* Shows an empty board:
	....
	....
	....
	....
	*/
	board1[{1,1}]='X';
	board1[{1,2}]='O';
	cout << board1 << endl;  /* Shows the following board:
	....
	.XO.
	....
	....
	*/

}
=======
#include "Board.hpp"

#include <iostream>
using namespace std;

int main() {
    Board b(4);
    Point p(3,3);
    cout<<b[p];

}
>>>>>>> 71851d128dbe88c4e57541b698dd488dcc4ecd4c
