#include <iostream>
using namespace std;

int Find_Factorial(int n){
    int factorial = 1;
    cout<< n << "! = ";
    for(int i = n; i > 0; i--){
        if(i != 1)
            cout<< i << " x ";
        else
            cout<< i << " = ";
        factorial = factorial * i;
    }
    return(factorial);
}

int main(){

    cout << "======= ***** TP-10: Working With Function ***** =======\n";
    cout << "Problem-02:=========================================\n\n";

    int n, Result;
    cout<< "***** Factorial Computing Program *****\n";
    cout<<"Please input any integer number: ";
    cin>> n;
    Result = Find_Factorial(n);
    cout<< Result;

    cout << "\n\n";
    cout << "END Problem-02:====================================\n\n";

return 0;
}






