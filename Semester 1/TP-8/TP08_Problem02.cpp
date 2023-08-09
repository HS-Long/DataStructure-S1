#include <iostream>
using namespace std;
int main(){

    cout << "======= ***** TP 08 Working with Array ***** =======\n";
    cout << "Problem-02:=========================================\n\n";

    //Step-01: Declare Array a1 & a2
    int a1[7] = {1, 2, 3, 4, 5, 6, 7};
    int a2[7];

    //Step-02: Copy elements from a1 to a2
    for(int i=0; i<7; i++){
        a2[i]= a1[i];
    }

    //Step-03: Display the original array elements
    int j;
    cout<< "Original array a2 elements: ";
    for(const int &a : a2){
        cout << "&a: " << &a << endl;
        if(&a != ""){
            cout<< a <<", ";
        }
        else { cout << a << endl; }

    }

    //Step-04: Display reverse array elements
    cout<< "\nReversed array a2 elements: ";
    for(int i=6; i>=0; i--){
        cout << a2[i] << " ";
    }

    cout << "\n\n";
    cout << "END Problem-02:====================================\n\n";
return 0;
}

