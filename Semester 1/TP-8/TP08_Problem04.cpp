#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){

    cout << "======= ***** TP 08 Working with Array ***** =======\n";
    cout << "Problem-04:=========================================\n\n";

    //Step-01: Declare variable
    int stu_Number;
    cout<< "Define student number: "; cin>> stu_Number;
    string name[stu_Number];
    int score[stu_Number];
    string email[stu_Number];
    string phone[stu_Number];

    //Step-02: Input array elements
    cout<< "Input Students Information: \n";
    for(int i = 0; i < stu_Number; i++){
        cout<< "#Student-" << i+1 << ": ";
        cin>> name[i];
        cin>> score[i];
        cin>> email[i];
        cin>> phone[i];
    }
    cout<< "\n\n";

    //Step-03: Display Students Info
    cout<< "List of Students Information: \n";
    cout<< left;
    cout<< setw(15) << "|Name" << setw(10) << "|Scores" << setw(22) << "|Email" << setw(15) << "|Phone number|\n";
    cout<< "-------------------------------------------------------------\n";
    for(int i = 0; i < stu_Number; i++){
        cout<< left;
        cout<< setw(15) << name[i] << setw(10) << score[i] << setw(22) << email[i] << setw(15) << phone[i] <<endl;
    }
    cout << "\n\n";
    cout << "END Problem-04:====================================\n\n";
return 0;
}



