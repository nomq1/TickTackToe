#include <iostream>
#include "Point.h"

using namespace std;


        Point::Point()
        {
            this->x=-1;
            this->y=-1;
            this->pair="{null,null}";
        }

        Point::Point(int num1,int num2)
        {
            this->x=num1;
            this->y=num2;
            this->pair='{'+num1+','+num2+'}';
        }

        void Point::setXY(int x, int y)
        {  
        x = x;
        y = y;
        }
        Point::~Point()
        {
            cout<<"";
        }


