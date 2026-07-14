#ifndef SHAPE_H
#define SHAPE_H

#include <string>
using namespace std;


class Shape{

public:
    Shape(const string&);
    virtual double area();
    virtual void display();
    string Getname();

private:
    string name;
};
#endif