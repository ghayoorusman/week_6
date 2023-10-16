#include<iostream>
using namespace std;
float amount(char code,float min);
main()
{
    char code;
    float min;
    cout<<"Enter the service code (R/r for regular,P/p for premium): ";
    cin>>code;
    
    cout<<"Enter the number of minutes used: ";
    cin>>min;
    cout<<"Amount Due: "<<amount(code,min);

}

float amount(char code , float min)
{
    float final_price;
    if(code=='p' || code=='P')
    {
        char time;
        
        cout<<"Enter the time of the call (D/d for day, N/n for night): ";
        cin>>time;
        if(time=='d' || time=='D')
        {
            final_price=25+((min-75)*0.10);
        }
        else
        {
            final_price=25+((min-100)*0.05);
        }
        return final_price;

    }

    if(code=='r' || code=='R');
    {
        
        final_price = 10 + ((min-50)*0.20);
        cout<<final_price;
        return final_price;

    }
}
