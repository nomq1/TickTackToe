#include "Board.hpp"

#include <iostream>
using namespace std;

int main() {
    Board b(4);
    Point p(3,3);
    cout<<b[p];

}
