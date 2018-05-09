#include "Point.h"
#include <string>
#include <exception>

using namespace std;

class IllegalCoordinateException : public exception
{
public:
    int x;
    int y;
	IllegalCoordinateException(int x,int y);
	string theCoordinate() const;

};
