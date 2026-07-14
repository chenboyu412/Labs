#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>
#include "Media.h"
using namespace std;

class Book : public Media{//Book class inherits from Media class
public:
    Book(const string & title)//constructor
    :Media(title)
    {};

    virtual void showType(){//overriding pure virtual function
        cout << GetTitle() << ": ";
        cout << "physical text" << endl << endl;
    };
};
#endif