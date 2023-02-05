#include<iostream>
using namespace std;
main()
{
    float price=500;
    string name;
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    cout<<"enter the movei name:";
    cin>>name;
    for(int x=0;x<5;x++)
    {
        if(name==movies[x])
        {
            if(x%2==0)
            {
                price=price-((price*10)/100);
            }
            else
            {
                price=price-((price*5)/100);
            }
        }

    }
    cout<<"price is :"<<price;
}