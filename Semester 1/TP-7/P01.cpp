#include <iostream>
using namespace std;
int main(){

    cout<< "=======***** Data Structure and Programming-I *****========\n";
    cout<< "      =======***** TP 07 Loop (\Part-2)\ *****=======\n";
    cout<< "Problem-01:================================================\n\n";

    //Write a C++ program to print all natural numbers from 1 to n using while loop.

    //Step-01: Declare variable
    int num;

    //Step-02: Print instruction of user
    cout<< "Please input any integer number: ";

    //Step-03: Get input from user
    cin>> num;

    //Step-04: Print output using while loop
    cout<< "\nOutput: ";
    for(int i=1; i<=num; i++){
        if(i != num)
            cout<< i << ", ";

        else
            cout<< i;
    }

    //Step-05: End of the problem.
    cout<< "\n";
    cout<< "\nEND Problem-01:=======================================\n\n";

return 0;
}


