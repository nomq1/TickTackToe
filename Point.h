
#include <iostream>
#include <string>
#pragma once
using namespace std;

class Point{
    public:
     string pair;
        int x;
        int y;
        Point();
        Point(int num1,int num2);
        void setXY(int x, int y);
        ~Point();
};
