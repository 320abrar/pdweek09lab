#include<iostream>
using namespace std;
main()
{
    bool flag=false;
    int size;
    cout<<"enter the size:";
    cin>>size;
    int  array[size];
   
    
    for(int x=0;x<size;x++)
    {
         cout<<"enter the array:";
        cin>>array[x];
        
        if(array[x]==7||array[x]%10==7)
        {
           flag=true;
           break;
        }
       
    }
    if(flag==true)
    {
        cout<<"Boom!";

    }
    if(flag==false)
    {
        cout<<"there is no 7 in the array";
    }
}