#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
using namespace std;

class Vector2D{
    //scalar on the right-hand side multiplication
    friend Vector2D operator*(const Vector2D& , int);
    //scalar on the left-hand side multiplication
    friend Vector2D operator*(int , const Vector2D&);
    //dot product of two vectors
    friend double operator*(const Vector2D& , const Vector2D&);
    //overloading the insertion operator
    friend ostream& operator<<(ostream& , const Vector2D&);
public:
    Vector2D();//default constructor
    Vector2D(double,double);//constructor with parameters

private:
    double x;
    double y;
};
#endif