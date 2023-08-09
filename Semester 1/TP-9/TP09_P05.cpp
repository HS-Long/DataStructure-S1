#include <iostream>
using namespace std;
int main(){

    cout << "======= ***** TP 09 Array Part-02 ***** =======\n";
    cout << "Problem-05:=========================================\n\n";

    //Step-01: Declare variables
    int m1[3][3] = { {3, 6, 7},
                     {5, 2, 9},
                     {8, 3, 1}
                   };
    int m2[3][3] = { {2, 4, 2},
                     {3, 7, 4},
                     {6, 2, 5}
                   };
    int m3[3][3];
    int sum = 0, MAX, MIN;
    float average;

    //Step-02: Find M3 elements
    cout<< "A- Display M3 elements: \n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
            cout<< m3[i][j] << "  ";
        }
        cout<< "\n";
    }
    //Step-03: B- Find Max and Min in M3
    MAX = m3[0][0];
    MIN = m3[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(MAX < m3[i][j])
                MAX = m3[i][j];
            if(MIN > m3[i][j])
                MIN = m3[i][j];
        }
    }
    cout<< "MAX = " << MAX << " and MIN = " << MIN <<endl;

    //Step-04: C- Find Sum and Average from M3
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum = sum + m3[i][j];
        }
    }

    cout<< "Sum from M3 = " << sum << endl;
    average = sum / 9;
    cout<< "C- Average from M3 = " << average;

    cout << "\n\n";
    cout << "END Problem-05:====================================\n\n";
return 0;
}





