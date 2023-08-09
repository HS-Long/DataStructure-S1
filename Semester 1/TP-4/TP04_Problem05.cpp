#include <iostream>
#include <string>
using namespace std;

void PayingTax_Condition(){

    string name;
    char gender;
    float salary, tax;

    cout<< "\nPlease input your information below: \n";
    cout<< "\t. Full Name: "; getline(cin >> ws, name);
    cout<< "\t. Gender(M or F): "; cin>> gender;
    cout<< "\t. Salary (USD): "; cin>> salary;

    //Pay tax 10% for male and salary more than 300 USD
    if((gender == 'M' || gender == 'm') && (salary>300)){
        tax = 0.1*salary;
    }
    //Pay tax 5% for male and salary is between 200 USD and 300 USD
    else if((gender == 'M' || gender == 'm') && (salary>200 && salary<300)){
        tax = 0.05*salary;
    }
    //Pay tax 5% for female and salary more than 300 USD
    else if((gender == 'F' || gender == 'f') && (salary>300)){
        tax = 0.05*salary;
    }
    //Pay tax 3% for female and salary is between 250 USD and 300 USD
    else if((gender == 'F' || gender == 'f') && (salary>250 && salary<300)){
        tax = 0.03*salary;
    }
    else{
        tax = 0;
    }
    cout<< "Hi " <<name<< ", based on your given information, the tax salary that you need to pay is: " <<tax<< " USD.\n";
    cout<< "Final salary is: " <<salary<< " - " <<tax<< " = " << salary - tax << "$";
}


int main(){

    cout<< "=======***** TP 04 Decision Making in C++ *****=======\n";
    cout<< "Problem_05:===========================================\n\n";
    cout<<"====== This Program will solve quadratic equation ======\n";

    for(int i=0; i<=4; i++){
        if(i==0){
            cout<< "\nCase1: Male, Salary > 300, Pay tax 10%";

        }
        else if(i==1){
            cout<< "\n\nCase2: Male, 200 < Salary < 300, Pay tax 5%";

        }
        else if(i==2){
            cout<< "\n\nCase3: Female, Salary > 300, Pay tax 5%";

        }
        else if(i==3){
            cout<< "\n\nCase4: Female, 250 < Salary < 300, Pay tax 3%";
        }
        else{
            cout<< "\n\nCase5: No need to pay task.";
        }
    PayingTax_Condition();
    }

    //End of the problem.
    cout<< "\n\nEND Problem_05:=======================================\n\n";

return 0;
}


