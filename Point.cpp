
#include <iostream>
#include "Point.hpp"

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
            this->pair=string("{"+x+','+y+'}');
        }

        
        Point::~Point()
        {
            cout<<"";
        }



       

