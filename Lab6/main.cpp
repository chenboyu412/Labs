#include "shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main(){

    Shape shape("Geometric shape");
    shape.display();
    cout << "Area: " << shape.area() << endl;
    cout << endl;

    Rectangle rect("Rectangle" , 18.0 , 4.12);
    rect.display();
    cout << "Area: " << rect.area() << endl;
    cout << endl;

    Circle circle("Circle" , 8.29);
    circle.display();
    cout << "Area: " << circle.area() << endl;
    
    



}