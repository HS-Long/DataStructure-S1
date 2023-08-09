#include <iostream>
#include <string>
using namespace std;
int main(){

    cout<< "=====***** TP 03 String Function *****=====\n";
    cout<< "Problem_01:===============================\n\n";

    //Step_01: Declare variables
    string first_name, last_name, username;

    //Step_02: Input value
    cout<< " Input first name: "; cin>> first_name;
    cout<< " Input last name: "; cin>> last_name;
    cout<< "\n";

    //Step_03: Concatenate firstname and lastname
    username = first_name + last_name;
    cout<< "( + ) Username of the user is: " << username << ".\n";

    username = first_name + "_" +last_name;
    cout<< "( _ ) Username of the user is: " << username << ".\n";

    username = first_name + " " +last_name;
    cout<< "(\" \") Username of the user is: " << username << ".\n";

    username = first_name.append(last_name);
    cout<< "( append() ) Username of the user is: " << username << ".";

    //Step_04: End of the problem.
    cout<< "\n\n";
    cout<< "END Problem_01:============================\n\n";

return 0;
}
