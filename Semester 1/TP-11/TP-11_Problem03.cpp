/*Write a function to get data from file TP11_P2.txt (data created by problem #2). The
data is stored in arrays. The program display all data from array on screen. Then ask
a user to input one more data of student (id, name, phone number). Finally, store all
data from arrays to file again.*/
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

void saveStunData(string);
void getStunData(string);
void getDataAndProcess(string);
const int MAX=1000;

int main(){

    cout << "======= ***** TP 11 Working With File ***** ========\n";
    cout << "Problem-02+03:=========================================\n\n";

    string file = "TP-11_P2.txt";

    //Call Save and Stun Function
    saveStunData(file);

    //Display Student List
    //getStunData(file);

    //Display Student List from Array
    getDataAndProcess(file);

    cout << "\n\n";
    cout << "END Problem-02+03:====================================\n\n";

return 0;
}
void saveStunData(string filename){

    //Create & OpenFile
    ofstream myFile(filename);

    //Write Student's Info
    myFile<< "0001 MA_Ousa 012475311" <<endl;
    myFile<< "0002 LY_Makara 012475311" <<endl;
    myFile<< "0003 Bunrong 012475311" <<endl;

    //Close File
    myFile.close();
}

/*void getStunData(string filename){
    string id, name, phone;

    ifstream myFile(filename);

    //Read Student's Info
    cout<< "Student's Information: \n\n";
    while(myFile >> id >> name >> phone){
        cout<< id << " " << name << " " << phone << endl;
    }
}*/

void getDataAndProcess(string filename){
    string id[MAX], name[MAX], phone[MAX];

    ifstream myFile(filename);

    //Read Student's Info
    cout<< "\nStudent's Information: \n\n";
    int i = 0;
    while(myFile>> id[i] >> name[i] >> phone[i]){
        cout<< id[i] << " " << name[i] << " " << phone[i] << endl;
        i++;
    }
    myFile.close();
}





