#include<iostream>
using namespace std;
string activity(string temp, string humidity);
main()
{
    string temp,humidity;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temp;
    cout<<"Enter humidity(dry or humid): ";
    cin>>humidity;
    cout<<"Recommended activity: "<< activity( temp,  humidity);
}

string activity(string temp, string humidity)
{
    string activity_;
    if (temp=="warm" && humidity=="dry")
    {
        activity_="Play tennis";
        return activity_;
    }

    if (temp=="warm" && humidity=="humid")
    {
        activity_="swim";
        return activity_;
    
    }

    if (temp=="cold" && humidity=="dry")
    {
        activity_="Play basketball";
        return activity_;
    
    }

    if (temp=="cold" && humidity=="humid")
    {
        activity_="Watch TV";
        return activity_;
    
    }
    
    
}