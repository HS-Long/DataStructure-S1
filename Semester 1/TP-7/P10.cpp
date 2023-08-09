#include <iostream>
using namespace std;
int main(){

    cout<< "=======***** Data Structure and Programming-I *****========\n";
    cout<< "      =======***** TP 07 Loop (\Part-2)\ *****=======\n";
    cout<< "Problem-10:================================================\n\n";

    //Write a C++ program to enter a number and print its reverse.

    int number;
    int remainder;
    cout<< "Please input any integer number: ";
    cin>> number;

    cout<< " The reverse of " << number << " is " ;
    while(1>0){
        remainder = number % 10;
        number = number / 10;
        cout<< remainder;

        if(number == 0)
            break;
    }
    cout<< ".";

    cout<< "\n";
    cout<< "\nEND Problem-10:=======================================\n\n";

return 0;
}






