<<<<<<< HEAD

#include <iostream>
#include <string>

using namespace std;

class Point{
    public:
     string pair;
        int x;
        int y;
        Point();
        Point(int num1,int num2);
        friend ostream& operator<<(ostream& out, const Point& p);
        ~Point();
};
=======

#include <iostream>
#include <string>

using namespace std;

class Point{

 
    public:
     string pair;
        int x;
        int y;
        Point();
        Point(int num1,int num2);
        ~Point();
};
>>>>>>> 71851d128dbe88c4e57541b698dd488dcc4ecd4c
