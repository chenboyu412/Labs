#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{//class declaration

public:

    Rectangle();
    void set_length(double);
    void set_width(double);
    double get_length();
    double get_width();
    double perimeter();
    double area();

private:

    double length;//data members
    double width;

};

#endif
