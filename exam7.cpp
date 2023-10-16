#include<iostream>
using namespace std;
string chkstatus(int a_h,int a_m,int s_h,int s_m);
main()
{
    int a_h,a_m,s_h,s_m;
    cout<<"exam starting time (hour): ";
    cin>>s_h;
    cout<<"exam starting time (minutes): ";
    cin>>s_m;
    cout<<"student hour of arrival: ";
    cin>>a_h;
    cout<<"student minutes of arrival: ";
    cin>>a_m;
    cout<<chkstatus(a_h,a_m,s_h,s_m);

}

string chkstatus(int a_h,int a_m,int s_h,int s_m)
{
    int before;
    string time;
    before=s_h - a_h;
    if(before<30)
    {
      time="late";
    }
    return time;
}