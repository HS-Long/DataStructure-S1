#include <iostream>
using namespace std;
int main(){

    cout<< "=======***** TP 06 Loop Types *****=======\n";
    cout<< "Problem-01:===============================\n\n";

    //Step-01: Declare variables
    int st, en, sum, mul;

    //Step-02: Define initialize value
    st = 0;
    en = 0;
    sum = 0;
    mul = 1;

    //Step-03: Get input number from user
    cout<< "Please input start number: "; cin>> st;
    cout<< "Please input end number  : "; cin>> en;

    cout<< "\nSUM: ";
    for(int i=st; i<=en; i++){//Run from start to end
        if(i!=en)
            cout<< i << " + " ;//Print the plus sign
        else
            cout << i << " = ";//Print the equal sign
        sum = sum + i;
    }
    cout << sum << endl;

    cout<< "MULTIPLY: ";
    for(int i=st; i<=en; i++){//Run from start to end
        if(i!=en)
            cout<< i << " x " ;//Print the multiplication sign
        else
            cout << i << " = ";//Print the equal sign
        mul = mul * i;
    }
    cout << mul << endl;

    //Step_04: End of the problem.
    cout<< "\n";
    cout<< "END Problem-01:============================\n\n";

return 0;
}


