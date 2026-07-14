#ifndef DVD_H
#define DVD_H

#include <string>
#include <iostream>
#include "Media.h"
using namespace std;

class DVD : public Media{//DVD class inherits from Media class
public:
    DVD(const string & title)//constructor
    :Media(title)
    {};

    virtual void showType(){//overriding pure virtual function
        cout << GetTitle() << ": ";
        cout << "digital media" << endl << endl;
    };
};
#endif