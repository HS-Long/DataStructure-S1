#include <iostream>
using namespace std;
int main(){

    cout<< "=======***** Data Structure and Programming-I *****========\n";
    cout<< "      =======***** TP 07 Loop (\Part-2)\ *****=======\n";
    cout<< "Problem-08:================================================\n\n";

    //Write a C++ program to calculate sum of digits of a number.

    int number, remainder;
    int sum = 0;
    cout<< "Please input any integer number: ";
    cin>> number;

    cout<< "Sum of digits = ";
    while(1>0){
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;

        if(number == 0)
            break;
    }
    cout<< sum;

    cout<< "\n";
    cout<< "\nEND Problem-08:=======================================\n\n";

return 0;
}





