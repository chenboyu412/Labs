#include <iostream>
#include <iomanip>
#include "Vector2D.h"
using namespace std;

//default constructor
Vector2D::Vector2D(){

    x = y = 0;

}

//constructor with parameters
Vector2D::Vector2D(double a , double b){

    x = a;
    y = b;

}

//scalar on the right-hand side multiplication
Vector2D operator*(const Vector2D& vec , int number){

    //returning a new Vector2D object with the result of the multiplication
    return Vector2D(vec.x * number , vec.y * number);

}

//scalar on the left-hand side multiplication
Vector2D operator*(int number , const Vector2D& vec){

    //returning a new Vector2D object with the result of the multiplication
   return Vector2D(vec.x * number , vec.y * number);

}

//dot product of two vectors
double operator*(const Vector2D& vec1 , const Vector2D& vec2){

    //returning the result of the dot product of the two vectors
    return (vec1.x * vec2.x) + (vec1.y * vec2.y);

}

//overloading the insertion operator
ostream& operator<<(ostream& output , const Vector2D& vec){

    output << '(' << vec.x << ", " << vec.y << ')';
    //returning the output stream object
    return output;
}