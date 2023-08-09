#include <iostream>
using namespace std;

int Find_Factorial(int n){
    int factorial = 1;
    for(int i = n; i > 0; i--){
        factorial = factorial * i;
    }
    return(factorial);
}

double computeSeries(int n){
    double sum = 0;
        for(double i=1; i<=n; i++){
            //sum = 1/1! + 2/2! + 3/3! + ... + n/n!
            sum = sum + i/Find_Factorial(i);
            /*if(i!= n)
                cout<< i/Find_Factorial(i) << " + ";
            else
                cout<< i/Find_Factorial(i) << " = ";*/

        }
return(sum);
}

int main(){

    cout << "======= ***** TP-10: Working With Function ***** =======\n";
    cout << "Problem-03:=========================================\n\n";

    int n;
    double Result;
    cout<< "Please input any integer number: ";
    cin>> n;
    Result = computeSeries(n);
    if(n>=1 || n<=3){
        for(int i=1; i<=n; i++){
            cout<< i << "/" << i << "! + ";
            cout<< "Sum of Series = "; 1/1! + 2/2! + 3/3! + ... + " << n << "/" << n << "! = " << Result;
        }
    }

    cout<< "Sum of Series = 1/1! + 2/2! + 3/3! + ... + " << n << "/" << n << "! = " << Result;

    cout << "\n\n";
    cout << "END Problem-03:====================================\n\n";

return 0;
}







