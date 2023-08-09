#include <iostream>
using namespace std;
int main(){

    cout << "======= ***** TP 09 Array Part-02 ***** =======\n";
    cout << "Problem-01:=========================================\n\n";

    //Step-01: Declare Variables
    int myArray[8] = { 1, 2, 56, 3, 2, 45, 2, 3 };
    int n, Count=0;
    int position[8];

    //Step-02: Input Array Elements & n value
    //cout<< "Input 8 numbers in [1-9]: ";
    /*for(int i = 0; i < 8; i++){
        cin>> myArray[i];
    }*/
    cout<<"\t   Array[10] = { 1, 2, 56, 3, 2, 45, 2, 3} : \n";
    cout<< "\n\n";

    cout<< "Input search element: ";
    cin>> n;

    //Step-03: Search number in array Elements
    for(int i = 0; i < 8; i++){
        if(n == myArray[i]){
            position[Count] = i + 1;
            Count++;
        }
    }
    //Step-04: Output the message
    if(Count == 0){
        cout<< "No Data Found!";
    }
    else{
        cout<< "There is " << Count << " time(s) in Array.\n";
        cout<< "They are located in positions ";
        for(int i = 0; i < Count; i++){
            if(i < Count-2){ // c =  0
                cout << position[i] << ", ";
            }
            else if(i == Count-2){ // i = 1   c = 1
                cout<< position[i] << " and ";
            }
            else if(i == Count-1){
                cout<< position[i] << ".";
            }
        }
    }
    cout << "\n\n";
    cout << "END Problem-01:====================================\n\n";
return 0;
}




