#include <iostream>
using namespace std;
main()
{
    int y=0;
    int chek=0;
    int count=0;
   int size;
   cout<<"enter the size of colors:";
   cin>>size;
   string color[size];
   for(int a=0;a<size;a++)
   {
   cout<<"enter the colors:";
   cin>>color[a];
   count++;
   }
   int seconds=count*2;
   for(int x=1;x<size;x++)
   {
    if(color[x]!=color[y])
    {
        chek++;
    }
    y++;
   }
   int total=seconds+chek;
   cout<<"total time is:"<<total;
}