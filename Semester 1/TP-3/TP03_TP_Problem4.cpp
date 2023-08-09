#include <iostream>
using namespace std;
int main(){

    cout<< "=====***** TP 03 String Function *****=====\n";
    cout<< "Problem_04:===============================\n\n";

    //Step_01: Declare variables
    string txt;

    //Step_02: Input txt
    cout<< "Input text: "; getline(cin, txt);

    //Step_03: Convert txt to uppercase
    for(int i=0; i<txt.size(); i++){
        txt[i] = toupper(txt[i]);
    }
    cout<< "\nConvert string to uppercase: " << txt <<endl;

    //Step_04: Convert txt to lowercase
    for(int i=0; i<txt.size(); i++){
        txt[i] = tolower(txt[i]);
    }
    cout<< "Convert string to lowercase: " << txt;


    //Step_04: End of the problem.
    cout<< "\n\n";
    cout<< "END Problem_04:============================\n\n";

return 0;
}
