#include<iostream>
using namespace std;
float calculate_average(float eng,float math,float chem,float ss,float bio);
 string grade(float average);
main()
{
  std :: string name;
  float eng,math,chem,ss,bio,average;
  cout<<"Enter student name: ";
  cin>>name;
  cout<<"Enter marks in english: ";
  cin>>eng;
  cout<<"enter marks in maths: ";
  cin>>math;
  cout<<"Enter marks in Chemistry: ";
  cin>>chem;
  cout<<"Enter marks in social science: ";
  cin>>ss;
  cout<<"Enter marks in biology: ";
  cin>>bio;
  cout<<"Student name: "<<name<<endl;
  average = calculate_average(eng,math,chem,ss,bio);
  cout<<"percentage: "<<average<<"%" << endl;
  string grade11 = grade(average);
  cout<<"Grade: "<<grade11;
}

float calculate_average(float eng,float math,float chem,float ss,float bio)
{
    float average;
    average=(((eng+math+chem+ss+bio)*100)/500) ;
    return average;
}

 string grade(float average)
{

 string grade_;
   if(average>91 && average<100)
   {
    grade_="A+";
    return grade_;
   }
 if(average>81 && average<90)
   {
    grade_="A";
    return grade_;
   }
 if(average>71 && average<80)
   {
    grade_="B+";
    return grade_;
   }
  if(average>61 && average<70)
   {
    grade_="B";
   return grade_;
   }
 if(average>51 && average<60)
   {
    grade_="C";
    return grade_;
   }
 if(average>41 && average<50)
   {
    grade_="D";
    return grade_;
   }
 if(average<40)
   {
    grade_="F";
    return grade_;
   }



}