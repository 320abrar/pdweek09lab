#include<iostream>
using namespace std;
main()
{
  int count=0;
   string array[4];
   
  for(int x=0;x<4;x++)
  {
    cout<<"Enter the array: " ;
    cin >>array[x];
      if(array[0]==array[x])
    {
        count++;
    }
  }
   
//     {
//         count++;
//     }
  
    if(count == 4)
    {
     cout<<"true:";
    }
    else
    {
     cout<<"false:";
    }
}