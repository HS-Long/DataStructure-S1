#include <iostream>
using namespace std;
int main(){

    cout<< "=======***** Data Structure and Programming-I *****========\n";
    cout<< "             =======***** TP 05 *****=======\n";
    cout<< "Problem-01:================================================\n\n";

    //Step-01: Declare variables
    int dob_day, dob_month, dob_year;
    int day, month, year;
    int current_day, current_month,current_year;

    //Step-02: Input value
    cout<< "Enter your dob on day  : "; cin>> dob_day;
    cout<< "Enter your dob in month: "; cin>> dob_month;
    cout<< "Enter your dob in year : "; cin>> dob_year;

    cout<< "\nEnter current day  : "; cin>> current_day;
    cout<< "Enter current month: "; cin>> current_month;
    cout<< "Enter current year : "; cin>> current_year;

    //Step-03: Put conditions
    if(current_month<dob_month){
       year = current_year - (dob_year+1);
       if(current_day>dob_day){
            month = (current_month+12)-dob_month;
            day = current_day - dob_day;
       }
       else if(current_day<dob_day){
            month = ((current_month+12)-dob_month)-1;
            day = (30 + current_day) - dob_day;
       }
    }
    else if(current_month>dob_month){
        year = current_year - dob_year;
        if(current_day>dob_day){
            month = current_month - dob_month;
            day = current_day - dob_day;
       }
       else if(current_day<dob_day){
            month = current_month - (dob_month+1);
            day = (30 + current_day) - dob_day;
       }
    }

    //Step-04: Display result
    cout<< "\n";
    cout<< "Your age till today is: " <<year<< "years " <<month<< "months " <<day<< "days";

    //Step-04: End of the problem.
    cout<< "\n\nEND Problem_01:=======================================\n\n";

return 0;
}
