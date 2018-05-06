#include <iostream>
#include "IllegalCoordinateException.hpp"


IllegalCoordinateException::IllegalCoordinateException(int num1,int num2)
{
    this->x=num1;
    this->y=num2;
}

string IllegalCoordinateException::theCoordinate() const
{
	return to_string(this->x) + "," + to_string(this->y);
}