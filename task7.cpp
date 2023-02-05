#include<iostream>
using namespace std;
main()
{
string string1;
cout<<"enter the first string 1:";
cin>>string1;
string string2;
cout<<"enter the second string 2:";
cin>>string2;
int a = string1.size();
int b = string2.size();
int count= 0;
for (int x=0;x<b;x++)
{
    for (int i=0;i<a;i++)
if (string1[x]==string2[i])
{
    count++;
    string2[i] = ' ';
    break;
}

}
cout<<"These strings have "<<count<<" common characters";
}
