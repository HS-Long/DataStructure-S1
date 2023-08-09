#include <iostream>
#include <string>
using namespace std;
int main(){

    cout<< "=====***** TP 03 String Function *****=====\n";
    cout<< "Problem_02:===============================\n\n";

    //Step_01: Declare variable
    string txt;

    //Step_02: Input String
    cout<< " Please input your text: "; getline(cin, txt);

    //Step_03: Calculate the length of string
    cout<< "\n The length of the text above is : " << txt.length()<< " characters (Using .lenght())\n";
    cout<< " The size of the text above is : " << txt.size()<< " characters (Using .size())";

    //Step_04: End of the problem.
    cout<< "\n\n";
    cout<< "END Problem_02:============================\n\n";

return 0;
}
