#ifndef INVALIDDURATIONEXCEPTION_H
#define INVALIDDURATIONEXCEPTION_H

#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;

// Inherit from runtime_error to create a custom exception class
class InvalidDurationException : public runtime_error{
public:
    InvalidDurationException(const string& error)
    :runtime_error(error)
    {}
};

#endif