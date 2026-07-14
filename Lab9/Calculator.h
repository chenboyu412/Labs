#ifndef CALCULATOR_H
#define CALCULATOR_H

// This is a template class for a simple calculator that can perform addition and subtraction on two numbers of any type (e.g., int, float, double).
template <typename T>
class Calculator{

public:
    //prototype
    Calculator(T, T);
    T add();
    T subtract();

private:
    T data1;
    T data2;
};

template<typename T>
Calculator<T>::Calculator(T number1, T number2)//constructor
:data1(number1) , data2(number2)
{}

template<typename T>//function to add the two numbers
T Calculator<T>::add(){
    return (data1 + data2);
}

template<typename T>//function to subtract the two numbers
T Calculator<T>::subtract(){
    return (data1 - data2);
}

#endif