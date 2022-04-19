/* $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
 ARROW PATTERN MAKING CODE
             *
           * * *
         * * * * *
       * * * * * * *
           * * *
           * * *
           * * *
           * * *
           * * *
           * * *
 $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int space, a_head, tail;

    cout <<"Enter number of a_head: ";
    cin >> a_head;
    cout <<"Enter number of tail: ";
    cin >> tail;

    for(int i = 1, k = 0; i <= a_head; ++i, k = 0)
    {
        for(space = 1; space <= a_head-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    
    for(int i = 1, k = 0; i <= tail; ++i, k = 0)
    {
        for(space = 1; space <= a_head-2; ++space)
        {
            cout <<"  ";
        }

        while(k != 3)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}