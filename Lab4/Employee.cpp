#include <iostream>
#include "Employee.h"
#include "Date.h"

using namespace std;

Employee::Employee(const Employee &r_Employee)//copy constructor
    :firstName(r_Employee.firstName) , lastName(r_Employee.lastName) , 
    birthDate(r_Employee.birthDate) , hireDate(r_Employee.hireDate)
    //copy constructor must initialize const data members with initializer list
{
    cout << "Employee object copy constructor: " << firstName << ' ' << lastName;
    cout << " Hired: ";
    hireDate.print();
    cout << " Birthday: " ;
    birthDate.print();
    cout << endl;
}

Employee::Employee(const string &first, const string &last, const Date &dateOfBirth, const Date &dateOfHire)
: firstName(first), lastName(last), birthDate(dateOfBirth), hireDate(dateOfHire) 
{
    cout << "Employee object constructor: " << firstName << ' ' << lastName << endl;
}

void Employee::print() const {
    cout << lastName << "," << firstName << " Hired: ";
    hireDate.print();
    // cout << hireDate.month << '/' << hireDate.day << '/' << hireDate.year;
    cout << " Birthday: ";
    birthDate.print();
    cout << endl;
}

Employee::~Employee() {
    cout << "Employee object destructor: " << lastName << ", " << firstName << endl;
}