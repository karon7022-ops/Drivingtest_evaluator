/*NAME: Aron kipkoech langat
 REG No: CT101/G/26629/25
 GROUP B; BSC computer science */
#include <iostream>
using namespace std;

int main(){
    string Student_name,result;
    float Theorytest_marks,Practicaltest_marks,Average_score;

    cout << "Enter your name: "<< endl;
    cin >> Student_name;

    cout << "What is your score on theory test: "<< endl;
    cin >> Theorytest_marks;

    cout << "What is your score on practical test: "<< endl;
    cin >> Practicaltest_marks;


    Average_score = (Theorytest_marks +Practicaltest_marks)/ 2;
    if (Average_score >=50)
    { 
        
      result = "passed";
    }
    else
     { 
      result = "failed";
    }
    cout <<"****************************************"<< endl;
    cout << "RESULT EVALUATIONS"<<endl;
    cout <<"****************************************"<< endl;
    cout <<"Student name: "<< Student_name<< endl;
    cout <<"Theory test marks: "<< Theorytest_marks<< endl;
    cout <<"Practical test marks: "<< Practicaltest_marks<< endl;
    cout << "Evaluation status: "<<result<< endl;
    cout <<"****************************************"<<endl;

    
    
    
    


    return 0;
}