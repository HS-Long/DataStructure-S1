#include <iostream>
#include <string>
using namespace std;
int main(){

    cout<< "=====***** TP 03 String Function *****=====\n";
    cout<< "Problem_03:===============================\n\n";

    //Step_01: Declare variables
    string first_name;

    //Step_02: Input firstname
    cout<< "Input your name: "; getline(cin, first_name);

    //Step_03: Find first and last letter.
    cout<< "\nYour name is : " <<first_name;

    int i;
    i = first_name.size()-1;
    cout<< "\nThe first letter is \" " << first_name[0] << " \" and the last letter is \" " << first_name[i] << " \".";

    //Step_04: End of the problem.
    cout<< "\n\n";
    cout<< "END Problem_03:============================\n\n";

return 0;
}
