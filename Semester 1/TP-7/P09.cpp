#include <iostream>
using namespace std;
int main(){

    cout<< "=======***** Data Structure and Programming-I *****========\n";
    cout<< "      =======***** TP 07 Loop (\Part-2)\ *****=======\n";
    cout<< "Problem-09:================================================\n\n";

    //Write a C++ program to calculate the product of digits of a number.

    int number, remainder;
    int mul = 1;
    cout<< "Please input any integer number: ";
    cin>> number;

    while(1>0){
        remainder = number % 10;
        mul = mul * remainder;
        number = number / 10;

        if(number == 0)
            break;
    }
    cout<< "Product of digits = " << mul;

    cout<< "\n";
    cout<< "\nEND Problem-09:=======================================\n\n";

return 0;
}






