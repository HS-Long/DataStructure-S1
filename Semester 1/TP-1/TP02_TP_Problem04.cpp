#include <iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main(){
    cout<< "=====***** TP 02 Data type, Operators & Math *****=====\n";
    cout<< "Problem-04:============================================\n\n";

    int second, hour, minute, second2;
    cout<< "Input second: "; cin>> second;

    if(second==60){
        cout<< "The time is: 1mn" ;
    }
    else if(second<60){
        cout<< "The time is: " <<second<< "s.";
    }
    else if((60 < second) && (second < 3600)){
        minute = second/60;
        second2 = second%60;
        if(second2==0){
            cout<< "The time is: " <<minute<< "mn ";
        }
        else
            cout<< "The time is: " <<minute<< "mn " <<second2<< "s.";
    }
    else if(second>=3600){
        hour = second/3600;
        minute = (second%3600)/60;
        second2 = (second%3600)%60;

        if((second%3600)==0){
           cout<< "The time is: " <<hour<< "h ";
        }
        else if(second2==0){
            cout<< "The time is: " <<hour<< "h " <<minute<< "mn";
        }
        else if(minute==0){
            cout<< "The time is: " <<hour<< "h " <<second2<< "s";
        }
        else
        cout<< "The time is: " <<hour<< "h " <<minute<< "mn " <<second2<< "s.";
    }

    cout<< "\n\n";
    cout<< "END Problem-04:========================================\n\n";

return 0;
}
