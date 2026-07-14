#include <iostream>
#include "Vector2D.h"
using namespace std;

int main(){

    //v1 value will be set to (0,0) by the default constructor
    Vector2D v1;
    //v2 and v3 values will be set by the constructor with parameters
    Vector2D v2(4.0,12.0);
    Vector2D v3(8.0,29.0);

    //displaying the values of v1, v2 and v3
    cout << "v1 value: " << v1 << endl;
    cout << "v2 value: " << v2 << endl;
    cout << "v3 value: " << v3 << endl;

    //displaying the results of the operations
    cout << "v2 * 3 value: " << v2 * 3 << endl;
    cout << "3 * v2 value: " << 3 * v2 << endl;
    cout << "v2 * v3 value: " << v2 * v3 << endl;
}