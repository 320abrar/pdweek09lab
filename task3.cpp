#include<iostream>
using namespace std;
main()
{
    int count=0;
    string name;
    cout<<"enter the string:";
    getline(cin,name);
    for(int x=0;name[x]!='\0';x++)
    {
        count++;
    }
    if(count%2==0)
    {
        cout<<"true:";
    }
    else{
        cout<<"false:";
    }
}