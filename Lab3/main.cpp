#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main(){

    Rectangle r1;//object declaration

    double default_length_r1 = r1.get_length();//accessor for default length
    double default_width_r1 = r1.get_width();//accessor for default width
    
    cout << fixed << setprecision(3);
    cout << "r1 default length:" << default_length_r1 << endl;
    cout << "r1 default width:" << default_width_r1 << endl;


    r1.set_length(1.3512323175);//test 1
    r1.set_width(5);//test 1
    double l_r1 = r1.get_length();
    double w_r1 = r1.get_width();
    double pr_r1 = r1.perimeter();
    double ar_r1 = r1.area();

    cout << "r1 length: " << l_r1 << endl;
    cout << "r1 width: " << w_r1 << endl;
    cout << "r1 perimeter: " << pr_r1 << endl;
    cout << "r1 area: " << ar_r1 << endl;

    cout << endl;
    Rectangle r2;

    double default_length_r2 = r2.get_length();
    double default_width_r2 = r2.get_width();
    cout << "r2 default length:" << default_length_r2 << endl;
    cout << "r2 default width:" << default_width_r2 << endl;

    r2.set_length(-5);//test 2
    r2.set_width(2.33334);//test 2
    double l_r2 = r2.get_length();
    double w_r2 = r2.get_width();
    double pr_r2 = r2.perimeter();
    double ar_r2 = r2.area();

    cout << "r2 length: " << l_r2 << endl;
    cout << "r2 width: " << w_r2 << endl;
    cout << "r2 perimeter: " << pr_r2 << endl;
    cout << "r2 area: " << ar_r2 << endl;
}