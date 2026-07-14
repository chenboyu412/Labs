#include "shape.h"
#include "Circle.h"
#include <iostream>
#include <numbers>
using namespace std;

Circle::Circle(const string & namee , double r)
:Shape(namee) , radius(r){
}

double Circle::area(){
    return radius * radius * numbers::pi;
}

void Circle::display(){
    cout << "This is a " << Getname() << endl;
    cout << "The radius is " << radius << '.' << endl;
}
