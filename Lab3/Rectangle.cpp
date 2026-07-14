#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(){//default data members
    length = width = 1;
}

void Rectangle::set_length(double l){

    if(l > 0){//validation for length
        length = l;
    }

    else{
        length = 1;
    }
}

void Rectangle::set_width(double w){
    
    if(w > 0){//validation for width
        width = w;
    }

    else{
        width = 1;
    }
}

double Rectangle::get_length(){//accessor for length
    return length;
}

double Rectangle::get_width(){//accessor for width
    return width;
}

double Rectangle::perimeter(){//accessor for perimeter
    return 2*(length + width);
}

double Rectangle::area(){//accessor for area
    return length * width;
}