#include<iostream>
using namespace std;
float calculate(string month, int stay);
main()
{
  string month;
  int stay;
  cout<<"Enter the month (may,june,july,august,september,october): ";
  cin>>month;
  cout<<"Enter the number of stays: ";
  cin>>stay;
  cout<<calculate(month,stay);

}

float calculate(string month, int stay)
{
    float apartment_ , studio_;
    if(month=="may" && month=="october")
    {
        if(stay>7 && stay<14)
        {
            apartment_=50*stay;
            studio_=65*stay;
            return apartment_,studio_;
        }
        if(stay>14)
        {
            apartment_=(stay*150)/100;
            studio_=(stay*195)/100;
            return apartment_,studio_;
        }
    }

     if(month=="june" && month=="september")
    {
        if(stay>7 && stay<14)
        {
            apartment_=50*stay;
            studio_=65*stay;
            return apartment_,studio_;
        }
        if(stay>14)
        {
            apartment_=(stay*150)/100;
            studio_=(stay*135)/100;
            return apartment_,studio_;
        }
    }

     if(month=="july" && month=="august")
    {
        if(stay>7 && stay<14)
        {
            apartment_=50*stay;
            studio_=65*stay;
            return apartment_,studio_;
        }
        if(stay>14)
        {
            apartment_=(stay*150)/100;
            studio_=(stay*195)/100;
            return apartment_,studio_;
        }
    }


}