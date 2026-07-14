#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include "shape.h"
using namespace std;

class Rectangle: public Shape{
public:
    Rectangle(const string & , double , double);
    double area() override;
    void display() override;

private:
    double length;
    double width;

};


#endif