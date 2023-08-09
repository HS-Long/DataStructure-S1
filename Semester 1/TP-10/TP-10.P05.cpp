/*Write a function that tests if a character exists in a string or not.
This function takes two parameters, one is a string and another is a character.*/
#include <iostream>
using namespace std;

void testIfExist(string s, char c){
    for(int i = 0; i < s.length(); i++){
        if(c == s[i]){
            cout<< c << " is existed";
            return;
        }
        else{
            cout<< c << " is not existed";
            break;
        }
    }
}

int main(){

    cout << "======= ***** TP-10: Working With Function ***** =======\n";
    cout << "Problem-05:=========================================\n\n";

    string str;
    char chr;

    cout<< "Input some string: "; cin>> str;
    cout<< "Input a character: "; cin>> chr;
    testIfExist(str, chr);

    cout << "\n\n";
    cout << "END Problem-05:====================================\n\n";

return 0;
}








