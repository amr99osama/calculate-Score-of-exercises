


//******************************
// Program Name : Total Score Of N
//Last Modification date : 28/2/2018
//Author : Amr Osama
//ID : 20170185
//Teaching Assistant : ENG/ Ibrahim Zeidan
//Purpose : this program take an input from user which is the number of exercises
//and total of these exercises and output the N total score and it's percentage
//******************************




#include <iostream>

using namespace std;

int main()
{
  int No_of_exercises;
  int Score_of_exercises;
  int score_required;
  double overall_score;
  double Total_EX_score;
  double percentage;
  int counter = 1;
  cout<<"enter the number of exercise you want to input"<<endl;
  cin>>No_of_exercises;
  while (counter<=No_of_exercises){
    cout<<"Score received for exercise "<<counter<<endl;
    cin>>Score_of_exercises;
    cout<<"Total points possible for exercise "<<counter<<endl;
    cin>>score_required;
    overall_score = overall_score + Score_of_exercises;
    Total_EX_score = Total_EX_score + score_required;

    counter++;
  }
  cout<<"Your total score is "<<overall_score<<" out of "<<Total_EX_score<<endl;
  percentage = (overall_score / Total_EX_score) *100;
  cout<<"In percentage equal to "<<percentage<<"%"<<endl;

  }









