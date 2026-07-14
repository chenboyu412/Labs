#include "shape.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(const string & namee , double l , double w)
:Shape(namee) , length(l) , width(w){
}

double Rectangle::area(){
    return length * width;
}

void Rectangle::display(){
    cout << "This is a " << Getname() << endl;
    cout << "The lenghth is " << length << '.' << endl;
    cout << "The width is " << width << '.' << endl;
}
