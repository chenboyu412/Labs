#ifndef MEDIA_H
#define MEDIA_H

#include <string>
using namespace std;

class Media{//Media is an abstract class
public:
    Media(const string & title)//constructor
    :Title(title)
    {};
    virtual ~Media() = default;//destructor

    virtual void showType() = 0;//pure virtual function

    string GetTitle(){//getter function
        return Title;
    };

private:
    string Title;
};
#endif