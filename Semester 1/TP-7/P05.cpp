#include <iostream>
using namespace std;
int main(){

    cout<< "=======***** Data Structure and Programming-I *****========\n";
    cout<< "      =======***** TP 07 Loop (\Part-2)\ *****=======\n";
    cout<< "Problem-05:================================================\n\n";

    //Write a C++ program to print all odd numbers from 1 to 100 using while loop.

    cout<< "All odd numbers between 1 to 100 are: ";
    for(int i=1; i<=100; i++){
        if(i%2 != 0){
            if(i!=99)
                cout<< i << ", ";
            else
                cout<< i;
        }
    }

    cout<< "\n";
    cout<< "\nEND Problem-05:=======================================\n\n";

return 0;
}



