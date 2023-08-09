#include <iostream>
using namespace std;
int main(){

    cout << "======= ***** TP 08 Working with Array ***** =======\n";
    cout << "Problem-03:=========================================\n\n";

    //Step-01: Declare array
    float subject[5];
    float sum = 0;
    float average;
    int cnt = 0;

    //Step-02: Input array elements
    cout<< "Enter 5 numbers: ";
    for(int i=0; i<5; i++){
        cin>> subject[i];
    }

    //Step-03: Find sum of all array elements
    for(int i=0; i<5; i++){
        sum += subject[i];
        ++cnt;
    }
    cout<< "Sum = " << sum << endl;

    //Step-04: Find Average
    average = sum / cnt;
    cout<< "Average = " << average << endl;

    cout << "\n\n";
    cout << "END Problem-03:====================================\n\n";
return 0;
}


