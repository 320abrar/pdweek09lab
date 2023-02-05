#include <iostream>
using namespace std;
main()
{
    int x;
    int a;
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
    "Pop", "Lock", "Arabesque"};
    int size;
    cout << "enter the size of numbers:";
    cin >> size;
    int array[size];
    for (x = 0; x < size; x++)
    {
        cout << "enter the array:";
        cin >> array[x];
        a = array[x] + x;
        if (a > 9)
        {
            a = a - 10;
        }
        cout << "final is as:" << moves[a] << endl;
    }
}
