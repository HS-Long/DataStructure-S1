#include <iostream>
#include <string>
using namespace std;
int main(){

    cout<< "=======***** Data Structure and Programming-I *****========\n";
    cout<< "             =======***** TP 05 *****=======\n";
    cout<< "Problem-01:================================================\n\n";

    //Step-01: Declare variables
    string txt;
    string reverse_string;
    int i,j;

    //Step-02: Input value
    cout<< "Input : "; cin>> txt;

    //Step-03: Find reverse string
    cout<< "Output: ";
    for(i=txt.length()-1; i>=0; i--){
        reverse_string = txt[i];
        cout<<reverse_string;
    }

    //Step-04: End of the problem.
    cout<< "\n\nEND Problem_01:=======================================\n\n";

return 0;
}
