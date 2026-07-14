#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
#include "shape.h"
using namespace std;

class Circle: public Shape{
public:
    Circle(const string & , double);
    double area() override;
    void display() override;

private:
    double radius;
};
#endif