#include <iostream>
using namespace std;

void checkEvenOdd(int n){
    if(n%2 == 0)
        cout<< n << " is an even number.";
    else
        cout<< n << " is an odd number.";
}
int main(){

    cout << "======= ***** TP-10: Working With Function ***** =======\n";
    cout << "Problem-01:=========================================\n\n";

    int n;
    cout<<"Please input any integer number: ";
    cin>> n;
    checkEvenOdd(n);

    cout << "\n\n";
    cout << "END Problem-01:====================================\n\n";
return 0;
}





