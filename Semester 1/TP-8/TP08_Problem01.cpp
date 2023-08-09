#include <iostream>
using namespace std;
int main(){

    cout << "======= ***** TP 08 Working with Array ***** =======\n";
    cout << "Problem-01:=========================================\n\n";

    //Step-01: Declare variables
    int numbers[10];

    //Step-02: Input Array Elements
    cout<< "Enter 10 numbers: "<<endl;
    for(int i=0; i<10; i++){
        cout<< "\t. ";
        cout<< "numbers[" << i << "]:";
        cin>> numbers[i];
    }

    //Step-03: Display all array elements
    //Method-01:
    cout<< "\n1. The array elements are: ";
    for(const int &n: numbers){
        cout << n << "  ";
    }
    cout << "\n\n";

    //Method-02:
    cout<< "2. The array elements are: ";
    for(int i=0; i<10; i++){
        cout<< numbers[i] << "  ";
    }

    cout << "\n\n";
    cout << "END Problem-01:====================================\n\n";
return 0;
}

