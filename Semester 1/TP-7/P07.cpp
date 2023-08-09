#include <iostream>
using namespace std;
int main(){

    cout<< "=======***** Data Structure and Programming-I *****========\n";
    cout<< "      =======***** TP 07 Loop (\Part-2)\ *****=======\n";
    cout<< "Problem-07:================================================\n\n";

    //Write a C++ program to find sum of first and last digit of a number..

    int number, Last_digit, First_digit;
    int i=0;
    cout<< "Please input any integer number: ";
    cin>> number;

    Last_digit = number % 10;
    while(number>=10){
        number = number / 10;
        First_digit = number;
    }
    cout<< "\n";
    cout<< "First_digit = " << First_digit <<endl;
    cout<< "Last_digit  = " << Last_digit <<endl;

    int sum = Last_digit + First_digit;
    cout<< "\n=> Sum = " << First_digit << " + " << Last_digit << " = " << sum;

    cout<< "\n";
    cout<< "\nEND Problem-07:=======================================\n\n";

return 0;
}





