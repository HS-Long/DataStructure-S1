#include <iostream>
using namespace std;
int main(){

    cout << "=====***** TP 02 Data Type, Operators & Math *****=====\n";
    cout << "Problem-03:============================================\n\n";

    int hour, minute, second, total;
    cout<< "Enter hour: ";   cin>> hour;
    cout<< "Enter minute: "; cin>> minute;
    cout<< "Enter second: "; cin>> second;
    total = hour*3600 + minute*60 + second;
    cout<< "The above time is equal to " << total << " seconds.";

    cout << "\n\n";
    cout << "END Problem-03:=======================================\n\n";
return 0;
}
