#include "Calculator.h"
#include <iostream>
using namespace std;

int main(){

    //creating objects of the class
    Calculator<int> Integer(4,12);
    Calculator<double> Double(4.12,8.29);

    //performing addition and subtraction on the objects
    cout << "Integer added:" << Integer.add() << endl << endl;
    cout << "Integer subtracted:" << Integer.subtract() << endl << endl;

    cout << "Double added:" << Double.add() << endl << endl;
    cout << "Double subtracted:" << Double.subtract() << endl << endl;


}