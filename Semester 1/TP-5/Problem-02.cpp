#include <iostream>
#include <string>
using namespace std;
int main(){

    cout<< "=======***** Data Structure and Programming-I *****========\n";
    cout<< "             =======***** TP 05 *****=======\n";
    cout<< "Problem-02:================================================\n\n";

    //Step-01: Declare variables
    string firstname, lastname, pob, department, major, phone, email;
    char gender;
    int age;
    float height;

    //Step-02: Input value for each variable
    cout<< "Please input your information below: \n";
    cout<< "\t. First name: "; cin>> firstname;
    cout<< "\t. Last name : "; cin>> lastname;
    cout<< "\t. Gender    : "; cin>> gender;
    cout<< "\t. Age       : "; cin>> age;
    cout<< "\t. POB       : "; getline(cin>> ws,pob);
    cout<< "\t. Height(m) : "; cin>> height;
    cout<< "\t. Department: "; getline(cin>> ws,department) ;
    cout<< "\t. Major     : ";      getline(cin>> ws, major);
    cout<< "\t. Phone     : "; getline(cin>> ws, phone);
    cout<< "\t. E-mail    : "; getline(cin>> ws, email);

    //Step-03: Display summary result
    cout<< "\n======= Summary result =======\n\n";
    cout<< "\t. First name: " <<firstname<<endl;
    cout<< "\t. Last name : " <<lastname<<endl;
    cout<< "\t. Gender    : " <<gender<<endl;
    cout<< "\t. Age       : " <<age<<endl;
    cout<< "\t. POB       : " <<pob<<endl;
    cout<< "\t. Height    : " <<height<< "m" <<endl;
    cout<< "\t. Department: " <<department<<endl;
    cout<< "\t. Major     : " <<major<<endl;
    cout<< "\t. Phone     : " <<phone<<endl;
    cout<< "\t. E-mail    : " <<email<<endl;

    //Step-04: End of the problem.
    cout<< "\nEND Problem_02:=======================================\n\n";

return 0;
}

