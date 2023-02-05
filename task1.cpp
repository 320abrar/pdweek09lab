#include<iostream>
using namespace std;
main()
{
    float totprice;
    string name;
    float quantity;
    string fruit[4]={"peach ","apple","guava","watermilon"};
    float price[4]={60,70,30,40};
    cout<<"enter the name of fruit:";
    cin>>name;
    cout<<"enter the quantity:";
    cin>>quantity;
    if(name==fruit[0])
    {
      totprice=price[0]*quantity;
    }
     if(name==fruit[1])
    {
      totprice=price[1]*quantity;
    }
     if(name==fruit[2])
    {
      totprice=price[2]*quantity;
    }
     if(name==fruit[3])
    {
      totprice=price[3]*quantity;
    }
    cout<<"your total price is:"<<totprice;
}