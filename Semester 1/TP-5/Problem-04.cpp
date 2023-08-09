#include <iostream>
using namespace std;
int main(){

    cout<< "=======***** Data Structure and Programming-I *****========\n";
    cout<< "             =======***** TP 05 *****=======\n";
    cout<< "Problem-04:================================================\n\n";

    cout<< "+======================================+\n";
    cout<< "| Score, Average, and Grade Calculator |\n";
    cout<< "+======================================+\n";

    //Step-01: Declare variables
    float score1, score2, score3;
    float total_score, average;
    char grade;

    //Step-02: Input each subject's score
    cout<< "Input the each subject's score below: \n";
    cout<< "\t. Subject[1]: "; cin>> score1;
    cout<< "\t. Subject[2]: "; cin>> score2;
    cout<< "\t. Subject[3]: "; cin>> score3;

    total_score = score1 + score2 + score3;
    average = total_score/3;

    //Step-03: Put condition for grade
    if(average>90)
        grade = 'A';
    else if(average>80)
        grade = 'B';
    else if(average>70)
        grade = 'C';
    else if(average>60)
        grade = 'D';
    else if(average>=50)
        grade = 'E';
    else
        grade = 'F';

    //Step-04: Display result
    cout<< "\n";
    cout<< "\t+========================+\n";
    cout<< "\t|         Result         |\n";
    cout<< "\t+========================+\n";
    cout<< "\t   Total Score = " <<total_score<<endl;
    cout<< "\t   Average     = " <<average<<endl;
    cout<< "\t   Grade       : " <<grade<<endl;

    //Step-05: End of the problem.
    cout<< "\nEND Problem_04:=======================================\n\n";

return 0;
}
