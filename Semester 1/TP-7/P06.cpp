#include <iostream>
using namespace std;
int main(){

    cout<< "=======***** Data Structure and Programming-I *****========\n";
    cout<< "      =======***** TP 07 Loop (\Part-2)\ *****=======\n";
    cout<< "Problem-06:================================================\n\n";

    //Write a C++ program to count number of digits in a number.

    int number;
    int counter = 0;

    cout<< "Please input any integer number: ";
    cin>> number;

    cout<< "The number of digit in " << number << " is: ";
    while(1>0){
        number = number / 10;
        counter = counter + 1;

        if(number == 0)
            break;
    }
    cout<< counter <<endl;


    cout<< "\n";
    cout<< "\nEND Problem-06:=======================================\n\n";

return 0;
}




