#include <iostream>
using namespace std;
int main(){

    cout<< "=======***** Data Structure and Programming-I *****========\n";
    cout<< "      =======***** TP 07 Loop (\Part-2)\ *****=======\n";
    cout<< "Problem-03:================================================\n\n";

    //Write a C++ program to print all alphabets from a to z using while loop.

    //Method-01: Using 'a' to 'z'
    cout<< "Method-01: \n";
    cout<< "The alphabets from a to z are: ";
    for(char i = 'a'; i <= 'z'; i++){
        if(i != 'z')
            cout<< i << ", ";
        else
            cout<< i;
    }

    //Method-02: Using ascii code value
    cout<< "\n\nMethod-02: \n";
    cout<< "The alphabets from a to z are: ";
    for(int i = 97; i <= 122; i++){
        if(i != 122)
            cout<< (char)i << ", ";
        else
            cout<< (char)i;
    }

    cout<< "\n";
    cout<< "\nEND Problem-03:=======================================\n\n";

return 0;
}




