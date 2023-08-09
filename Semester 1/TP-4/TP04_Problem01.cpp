#include <iostream>
using namespace std;
int main(){

    cout<< "=====***** TP 04 Decision Making in C++ *****=====\n";
    cout<< "Problem_01:===============================\n\n";

    cout<< "===== This block of code with check a positive or negative number =====\n";

    //Step_01: Declare variables
    float num;

    //Step_02: Get number from user
    int i=0;
    while(i<=4){
    cout<< "\nPlease input number: "; cin>> num;

    //Step_04: Put conditions by comparing to 0
    if(num>0 )
        cout<< "Positive.";
    else if(num<0)
        cout<< "Negative.";
    else
        cout<< "Neutral.";
    cout <<endl;

    i++;
    }

    //Step_05: End of the problem.
    cout<< "\n";
    cout<< "END Problem_01:============================\n\n";

return 0;
}

