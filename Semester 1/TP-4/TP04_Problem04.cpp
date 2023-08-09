#include <iostream>
#include <cmath>
using namespace std;

void Delta_GreaterThanZero(){
    float a,b,c;
    float x1, x2, x;
    float delta;

    //Get value from user
    while(1>0){
        cout<<"Input coefficient a, b, c:\n";
        cout<<"\t. a: "; cin>>a;
        cout<<"\t. b: "; cin>>b;
        cout<<"\t. c: "; cin>>c;

        //Discriminant Formula
        delta=b*b-4*a*c;

        if (delta>0){
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            cout<<"The roots of the equation are: x1 = " <<x1<< " and x2 = " <<x2;
            break;
        }
        else if(delta==0 || delta<0){
            cout<< "Wrong coefficient a, b, c! Delta must be greater than 0. Please input again!\n";

        }
    }
}

void Delta_EqualZero(){
    float a,b,c;
    float x1, x2, x;
    float delta;

    //Get value from user
    while(1>0){
        cout<<"Input coefficient a, b, c:\n";
        cout<<"\t. a: "; cin>>a;
        cout<<"\t. b: "; cin>>b;
        cout<<"\t. c: "; cin>>c;

        //Discriminant Formula
        delta=b*b-4*a*c;

        if (delta==0){
            x = -b/(2*a);
            cout<<"The root of the equation is: x1 = x2 = " <<x;
            break;
        }
        else if(delta>0 || delta<0){
            cout<< "Wrong coefficient a, b, c! Delta must be greater than 0. Please input again!\n";

        }
    }
}

void Delta_LessThanZero(){
    float a,b,c;
    float x1, x2, x;
    float delta;
    float C1, C2; //C1 and C2 are the two complex roots when delta < 0

    //Get value from user
    while(1>0){
        cout<<"Input coefficient a, b, c:\n";
        cout<<"\t. a: "; cin>>a;
        cout<<"\t. b: "; cin>>b;
        cout<<"\t. c: "; cin>>c;

        //Discriminant Formula
        delta=b*b-4*a*c;

        if (delta<0){
            float C1 = -b/(2*a);
            float C2 = sqrt(-delta)/(2*a);
            if(C2==1){
               cout<<"The roots of the equation are: x1 = " <<C1<< " + i, x2 = " <<C1<< " - i";
            }
            else{
                cout<<"The roots of the equation are: x1 = " <<C1<< " + " <<C2<< "i, x2 = " <<C1<< " - " <<C2<< "i";
            }
            break;
        }
        else if(delta==0 || delta>0){
            cout<< "Wrong coefficient a, b, c! Delta must be greater than 0. Please input again!\n";

        }
    }
}
void Test_ThreeInOne(){
    //Declare variable
    float a,b,c;
    float x1, x2, x;
    float delta;
    float C1, C2; //C1 and C2 are the two complex roots when delta < 0

    //Get value from user
    cout<<"Input coefficient a, b, c:\n";
    cout<<"\t. a: "; cin>>a;
    cout<<"\t. b: "; cin>>b;
    cout<<"\t. c: "; cin>>c;

    //Discriminant Formula
    delta=b*b-4*a*c;

    //Delta > 0
    if (delta>0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        cout<<"The roots of the equation are: x1 = " <<x1<< " and x2 = " <<x2;
    }
    //Delta = 0
    else if (delta==0){
        x = -b/(2*a);
        cout<<"The root of the equation is: x1 = x2 = " <<x;
    }
    //Delta < 0
    if (delta<0){
            float C1 = -b/(2*a);
            float C2 = sqrt(-delta)/(2*a);
            if(C2==1){
               cout<<"The roots of the equation are: x1 = " <<C1<< " + i, x2 = " <<C1<< " - i";
            }
            else{
                cout<<"The roots of the equation are: x1 = " <<C1<< " + " <<C2<< "i, x2 = " <<C1<< " - " <<C2<< "i";
            }
    }
}
int main(){

    int choice;

    cout<< "=======***** TP 04 Decision Making in C++ *****=======\n";
    cout<< "Problem_04:===========================================\n\n";
    cout<<"====== This Program will solve quadratic equation ======\n";

    cout<< "Menu: \n";
    cout<< "1. Test three in one program \n";
    cout<< "2. Test one by one \n";
    cout<< "Please choose the menu above: "; cin>> choice;

    if(choice==1){
        Test_ThreeInOne();
    }
    else if(choice==2){
    for(int i=0; i<=2; i++){
        if(i==0){
            cout<<"\nCase1: Delta > 0\n";
            Delta_GreaterThanZero();
        }
        else if(i==1){
            cout<<"\n\nCase2: Delta = 0\n";
            Delta_EqualZero();
        }
        else{
            cout<<"\n\nCase3: Delta < 0\n";
            Delta_LessThanZero();
        }
    }
    }
    //End of the problem.
    cout<< "\n\nEND Problem_04:=======================================\n\n";

return 0;
}

