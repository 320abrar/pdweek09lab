#include <iostream>
using namespace std;
main()
{
    int x;
    int size;
    cout << "enter the size:";
    cin >> size;
    int array[size];
    int times;
    cout << "enter the times for which you run the loop:";
    cin >> times;
     for(int x=0;x<size;x++)
            {
          cout << "enter the array:";
            cin >> array[x];
            }
    
    for ( int y = 0; y < times; y++)
    {
        for(int x=0;x<size;x++)
        {  
            if (array[x] % 2 == 0)
            {
                array[x] = array[x] - 2;
            }
            if (array[x] % 2 != 0)
            {
                array[x] = array[x] + 2;
            }
        }
    
    }
        for(x=0;x<size;x++) 
        {
         cout << "your final array is:" << array[x];
        }
}

       
    

