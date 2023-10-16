#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit,string day,float quantity);
main()
{
string fruit,day;
float quantity;
cout<<"enter the fruit(banana/apple/orange/grape/kiwi/pineapple/grapes): ";
cin>>fruit;
cout<<"enter th day: ";
cin>>day;
cout<<"enter the amount: ";
cin>>quantity;

float final=calculateFruitPrice(fruit,day,quantity);

cout<<"amount is: "<<final;
}

float calculateFruitPrice(string fruit,string day,float quantity)
{
    float final_price;
    if((day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday") && fruit=="banana");
     {
        final_price=quantity*2.5;
        return final_price;
     }

     if((day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday") && fruit=="apple");
     {
        final_price=quantity*1.2;
        return final_price;
     }

     if((day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday") && fruit=="orange");
     {
        final_price=quantity*0.85;
        return final_price;
     }

     if((day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday") && fruit=="grape");
     {
        final_price=quantity*1.45;
        return final_price;
     }

     if((day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday") && (fruit=="kiwi"));
     {
        final_price=quantity*2.70;
        return final_price;
     }

     if((day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday") && fruit=="pineappe");
     {
        final_price=quantity*5.5;
        return final_price;
     }

     if((day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday") && fruit=="grapes");
     {
        final_price=quantity*3.85;
        return final_price;
     }

     if((day=="saturday" || day=="sunday" ) && fruit=="banana");
     {
        final_price=quantity*2.7;
        return final_price;
     }

      if((day=="saturday" || day=="sunday" ) && fruit=="apple");
     {
        final_price=quantity*1.25;
        return final_price;
     }

     
      if((day=="saturday" || day=="sunday" ) && (fruit=="orange"));
     {
        final_price=quantity*0.9;
        return final_price;
     }


      if((day=="saturday" || day=="sunday" ) && fruit=="grape");
     {
        final_price=quantity*1.9;
        return final_price;
     }


      if((day=="saturday" || day=="sunday" ) && fruit=="kiwi");
     {
        final_price=quantity*3;
        return final_price;
     }


      if((day=="saturday" || day=="sunday" ) && fruit=="pineapple");
     {
        final_price=quantity*5.6;
        return final_price;
     }


      if((day=="saturday" || day=="sunday" ) && fruit=="grapes");
     {
        final_price=quantity*4.2;
        return final_price;
     }




     

     
     
}