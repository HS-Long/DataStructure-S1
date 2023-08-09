#include <iostream>
using namespace std;
int main(){

    cout<< "=======***** TP 04 Decision Making in C++ *****=======\n";
    cout<< "Problem_03:===========================================\n\n";

    cout<< "===== This program will find the minimum and maximum value =====\n";

    //Step_01: Declare variables
    int num1, num2, num3, num4, num5, num6, num7;
    int Max, Min;
    int i;

    //Step_02: Input value to variables
    cout<< "\nInput value: \n";
    cout<< "\t. num1: "; cin>> num1;
    cout<< "\t. num2: "; cin>> num2;
    cout<< "\t. num3: "; cin>> num3;
    cout<< "\t. num4: "; cin>> num4;
    cout<< "\t. num5: "; cin>> num5;
    cout<< "\t. num6: "; cin>> num6;
    cout<< "\t. num7: "; cin>> num7;

    //Step_03: Find minimum value.
    Min = num1;
    if(Min>num2)
        Min = num2;
    if(Min>num3)
        Min = num3;
    if(Min>num4)
        Min = num4;
    if(Min>num5)
        Min = num5;
    if(Min>num6)
        Min = num6;
    if(Min>num7)
        Min = num7;

    //Step_04: Print min value
    cout<< "Minimum value is: " << Min;

    //Step_05: End of the problem.
    cout<< "\n";
    cout<< "END Problem_03:=======================================\n\n";

return 0;
}



