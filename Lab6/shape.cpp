#include "shape.h"
#include <iostream>
using namespace std;

Shape::Shape(const string & Refname)
:name(Refname){

}

double Shape::area(){
    return 0.0;
}

void Shape::display(){
    cout << "This is a " << name << '.' << endl; 
}

string Shape::Getname(){
    return name;
}