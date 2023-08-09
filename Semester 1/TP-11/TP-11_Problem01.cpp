/*Write a function that take a string as parameter. The string represents that file name.
The function write number from 1993 to 2023 into file in which every line in the file should be 10 numbers.*/
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

void storeDataInFile(string filename){
    int Count = 0;
    //Create & OpenFile
    ofstream myFile("filename.txt");

    //Write data into File
    for(int i=1794; i<=2023; i++){
        myFile << i << " ";
        Count++;
        if(Count%10 == 0){
            myFile << "\n";
        }
    }
    //Close File
    myFile.close();
}

void getDataFromFile(string filename){
    string myText;

    ifstream myFile(filename);
    cout<< "Data from File: \n";
    while(getline(myFile, myText)){
        cout << myText << endl;
        Sleep(100);
    }
    myFile.close();
}
int main(){

    cout << "======= ***** TP 11 Working With File ***** ========\n";
    cout << "Problem-01:=========================================\n\n";

    string file = "filename.txt";
    //Calling Function
    storeDataInFile(file);

    //Display File Data
    getDataFromFile(file);


    cout << "\n\n";
    cout << "END Problem-01:====================================\n\n";
return 0;
}




