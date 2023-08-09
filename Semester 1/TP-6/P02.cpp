#include <iostream>
using namespace std;
int main(){

    cout<< "=======***** TP 06 Loop Types *****=======\n";
    cout<< "Problem-02:===============================\n\n";

    //Step-01: Declare variables
    int m, n, i;

    //Step-02: Get input number from user
    cout<< "Input m: "; cin>> m;
    cout<< "Input n: "; cin>> n;

    //For loop
    cout<< "\n\t. For loop: ";
    for(i = m; i<=n; i++){
        cout<< i << " " ;
    }

    //while loop
    cout<< "\n\t. while loop: ";
    i = m;
    while(i<=n){
        cout<< i << " " ;
        i++;
    }

    //do ... while loop
    cout<< "\n\t. do ... while loop: ";
    i = m;
    do{
        cout<< i << " ";
        i++;
    }
    while(i<=n);

    //Step-03: End of the problem.
    cout<< "\n";
    cout<< "\nEND Problem-02:============================\n\n";

return 0;
}


