#include <iostream>
using namespace std;
int main(){

    cout<< "=======***** TP 04 Decision Making in C++ *****=======\n";
    cout<< "Problem_02:===========================================\n\n";

    cout<< "===== This program will check even or odd number =====\n";

    //Step_01: Declare variable
    int num;

    //Step_02: Get number from user input
    int i=1;
    while(i<=2){
    cout<< "\nPlese input number: "; cin>> num;

    int remainder = num % 2;
    string Output = (remainder == 0)? "Even." : "Odd.";

    cout<< "Output: " <<Output<< "\n" ;

    i++;
    }

    //Step_05: End of the problem.
    cout<< "\n";
    cout<< "END Problem_02:=======================================\n\n";

return 0;
}

