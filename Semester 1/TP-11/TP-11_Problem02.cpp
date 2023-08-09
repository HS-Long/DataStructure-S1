/*Write function to input student’s information with id, name and phone in a text file (TP11_P2.txt).
And create another function to read student’s information from the text file to show on screen.
Remark: When store data into file, one student's info is stored in one line and data of that student is separated by a space.*/
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

void saveStunData(string);
void getStunData(string);

int main(){

    cout << "======= ***** TP 11 Working With File ***** ========\n";
    cout << "Problem-02:=========================================\n\n";

    string file = "TP-11_P2.txt";

    //Calling Function
    saveStunData(file);

    //Display Student List
    getStunData(file);

    cout << "\n\n";
    cout << "END Problem-02:====================================\n\n";

return 0;
}
void saveStunData(string filename){

    //Create & OpenFile
    ofstream myFile(filename);

    //Write Student's Info
    myFile<< "0001 MA Ousa 012475311" <<endl;
    myFile<< "0002 LY_Makara 012475311" <<endl;
    myFile<< "0003 Bunrong 012475311" <<endl;

    //Close File
    myFile.close();
}

void getStunData(string filename){
    string id, name, phone;

    ifstream myFile(filename);

    //Read Student's Info
    cout<< "Student's Information: \n\n";
    while(myFile >> id >> name >> phone){
        cout<< id << " " << name << " " << phone << endl;
    }
}





