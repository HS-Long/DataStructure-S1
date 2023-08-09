
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<< "=====***** TP 02 Data type, Operators & Math *****=====\n";
    cout<< "Problem-05:============================================\n\n";

    float x, y, f5, Degree, Radian;
    cout<< "Input value x: "; cin>> x;
    cout<< "Input value y: "; cin>> y;
    cout<< "\n";

    cout<< "f1 = 2x - 3y = " << 2*x - 3*y <<endl;
    cout<< "f2 = (3x)/2 = " << (3*x)/2 <<endl;
    cout<< "f3 = x^2 - 5x/2 + y^(3/2) = " << (pow(x,2)-5*(x/2)+pow(y,3/2)) <<endl;
    cout<< "f4 = (x + y^(1/2)/(2x) = " << (x + sqrt(y)/(2*x)) <<endl;

    cout<< "f5 = sin(x) + tan(y): \n";
    f5 = sin(x) + tan(y);
    cout<< "\t. If x and y are Radian => f5 =  " << f5 <<endl;
    cout<< "\t. If x and y are Degree => f5 = " << sin(x*(M_PI)/180) + tan(y*(M_PI)/180) ;

    cout<< "\n\n";
    cout<< "END Problem-05:========================================\n";

return 0;
}
