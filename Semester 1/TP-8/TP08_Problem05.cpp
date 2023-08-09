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
    float sum = 0, average;

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

    cout<< "\n\n";

    //Step-04: Find SUM from students scores
    for(int i=0; i < stu_Number; i++){
        sum += score[i];
    }
    cout<< "SUM = " << sum << endl;
    average = sum / stu_Number;
    cout<< "AVERAGE = " << average << endl;

    cout<< "\n\n";

    //Step-05: Find student scores >= average & display student info
    cout<< "Student Info have/has Scores more than Average: \n\n";
    cout<< left;
    cout<< setw(15) << "|Name" << setw(10) << "|Scores" << setw(22) << "|Email" << setw(15) << "|Phone number|\n";
    cout<< "-------------------------------------------------------------\n";
    for(int i = 0; i < stu_Number; i++){
        if(score[i] >= average){
            cout<< left;
            cout<< setw(15) << name[i] << setw(10) << score[i] << setw(25) << email[i] << setw(15) << phone[i] <<endl;
        }
    }

    cout << "\n\n";
    cout << "END Problem-04:====================================\n\n";

return 0;
}



